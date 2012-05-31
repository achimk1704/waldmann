#include <avr/io.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


#define SPI_DDR  DDRB

/* PROTOTYPES */
uint8_t extractChannelNumber(char *cmd);
unsigned char SPI_WriteRead(unsigned char dataout);
void sendSpiString(char *string);
void handleCmd(char *cmd);

/* GLOBAL VARIABLES */
char stbValues[4] = {'!','A','a','O'};
char swichStatus[10] = {'0','0','0','0','0','0','0','0','0','0'};
char swichNames[8][20] = {"S1","S2","S3","S4","S5","S6","S7","S8"};
char sourceNames[4][20] = {"Source1","Source2","Source3","Source4"};
char sourceValues[4][8] = {"1.142","4.123","1337","1401.14"};
char sourceUnits[4][4] = {"°C","V","mA","mV"};


int main(void)
{
	unsigned char cmd[32];
	uint8_t counter;

	DDRC = 0xFF; //PORTC als Output definieren

	// Set MISO (PB6) as output, others as input
	SPI_DDR |= (1 << PB6);
	// Enable SPI as Slave
	SPCR = (1 << SPE);

	PORTC = 0x1F;
	while (1)
	{
		//Befehl einlesen (max. 32 Zeichen)
		for (counter = 0; counter < 32; counter++)
		{
			cmd[counter] = SPI_WriteRead('x');
			if (cmd[counter] == '\0')
				break;
		}

		//Befehl verarbeiten
		handleCmd(cmd);

		//Erfolg!
		PORTC = 0x33;
	}

	PORTC = 0x10;

	return 1;
}

void handleCmd(char *cmd)
{
	uint8_t channel = 0;
	uint8_t random = 0;

	if(strcasecmp(cmd,"*STB?") == 0)
	{
		random = rand() % 4;
		SPI_WriteRead(stbValues[random]);
		SPI_WriteRead('\0');
	}
	else if(strcasecmp(cmd,"*CLS") == 0)
		sendSpiString("");
	else if(strstr(cmd,"SOURCE:NAME?(@") != NULL)
	{
		channel = extractChannelNumber(cmd);
		if(channel == 0 || channel > 20)
		{
			sendSpiString("CMD_PARSE_ERROR");
			return;
		}

		//Channel -1, wegen Array und mod 4, wegen begrenztem Speicher
		channel = channel - 1;
		channel = channel % 4;

		sendSpiString(sourceNames[channel]);
	}
	else if(strstr(cmd,"SOURCE:VALUE?(@") != NULL)
		{
			channel = extractChannelNumber(cmd);
			if(channel == 0 || channel > 20)
			{
				sendSpiString("CMD_PARSE_ERROR");
				return;
			}

			//Channel -1, wegen Array und mod 4, wegen begrenztem Speicher
			channel = channel - 1;
			channel = channel % 4;

			sendSpiString(sourceValues[channel]);
		}
	else if(strstr(cmd,"SOURCE:UNIT?(@") != NULL)
		{
			channel = extractChannelNumber(cmd);
			if(channel == 0 || channel > 20)
			{
				sendSpiString("CMD_PARSE_ERROR");
				return;
			}

			//Channel -1, wegen Array und mod 4, wegen begrenztem Speicher
			channel = channel - 1;
			channel = channel % 4;

			sendSpiString(sourceUnits[channel]);
		}
	else if(strstr(cmd,"SWITCH:NAME?(@") != NULL)
		{
			channel = extractChannelNumber(cmd);
			if(channel == 0 || channel > 8)
			{
				sendSpiString("CMD_PARSE_ERROR");
				return;
			}

			//Channel -1, wegen Array
			channel = channel - 1;

			sendSpiString(swichNames[channel]);
		}
	else if(strstr(cmd,"SWITCH:VALUE?(@") != NULL)
		{
			channel = extractChannelNumber(cmd);
			if(channel == 0 || channel > 8)
			{
				sendSpiString("CMD_PARSE_ERROR");
				return;
			}

			//Channel -1, wegen Array
			channel = channel - 1;

			SPI_WriteRead(swichStatus[channel]);
			SPI_WriteRead('\0');
		}
	else if(strstr(cmd,"SWITCH:ON(@") != NULL)
		{
			channel = extractChannelNumber(cmd);
			if(channel == 0 || channel > 8)
			{
				sendSpiString("CMD_PARSE_ERROR");
				return;
			}

			//Channel -1, wegen Array
			channel = channel - 1;
			swichStatus[channel] = '1';

			sendSpiString("");	//Keine Antwort, nur \0
		}
	else if(strstr(cmd,"SWITCH:OFF(@") != NULL)
		{
			channel = extractChannelNumber(cmd);
			if(channel == 0 || channel > 8)
			{
				sendSpiString("CMD_PARSE_ERROR");
				return;
			}

			//Channel -1, wegen Array
			channel = channel - 1;
			swichStatus[channel] = '0';

			sendSpiString("");	//Keine Antwort, nur \0
		}

	else
		sendSpiString("CMD_PARSE_ERROR");

}

uint8_t extractChannelNumber(char *cmd)
{
	char *pAnfangChannel;
	char channel[3];

	pAnfangChannel = strstr(cmd,"(@");
	if(pAnfangChannel == NULL)
		return -1;

	strncpy(channel,pAnfangChannel+2,2);
	channel[2] = '\0';

	if(channel[1] == ')')
		channel[1] = '\0';

	return atoi(channel);
}

unsigned char SPI_WriteRead(unsigned char dataout)
{
	// Put Slave Data On SPDR
	SPDR = dataout;
	// Wait for transmission complete
	while (!(SPSR & (1 << SPIF)))
		;
	// Return Serial In Value (MISO)
	return SPDR;
}

void sendSpiString(char *string)
{
	uint8_t i = 0;
	while(string[i] != '\0')
	{
		SPI_WriteRead(string[i]);
		i++;
	}

	SPI_WriteRead('\0');
}
