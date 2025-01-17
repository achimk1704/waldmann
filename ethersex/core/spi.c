/*
 *
 * (c) by Alexander Neumann <alexander@bumpern.de>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License (either version 2 or
 * version 3) as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * For more information on the GPL, please go to:
 * http://www.gnu.org/copyleft/gpl.html
 */

#include <avr/io.h>
#include "core/spi.h"
#include "spi.h"
#include "debug.h"
#include "config.h"

#if defined(RFM12_SUPPORT) || defined(ENC28J60_SUPPORT) \
  || defined(DATAFLASH_SUPPORT) || defined(SD_READER_SUPPORT) || defined(WALDMANN)	//HIER !!!!!!!!!!

void spi_init(void)
{
  /* Input and Output configuration is done in the beginning of main(), so it
   * doesn't have to be done here
   */

  /* Set the chip-selects as high */
#ifdef WALDMANN								//HIER !!!!!!
    PIN_SET(SPI_CS_WALDMANN);
#endif

#ifdef ENC28J60_SUPPORT
    PIN_SET(SPI_CS_NET);
#endif

#ifdef RFM12_SUPPORT
    PIN_SET(SPI_CS_RFM12);
#endif

#ifdef DATAFLASH_SUPPORT
    PIN_SET(SPI_CS_DF);
#endif

#ifdef USTREAM_SUPPORT
    PIN_SET(VS1053_CS);
#endif

#if defined(SPI_CS_SD_READER_PIN) && defined(SD_NETIO_ADDON_WORKAROUND)
    PIN_SET(SPI_CS_SD_READER);
#endif

#ifndef SOFT_SPI_SUPPORT
    /* enable spi, set master and clock modes (f/2) */
    _SPCR0 = _BV(_SPE0) | _BV(_MSTR0);
    _SPSR0 = _BV(_SPI2X0);
#endif
}


#ifndef SOFT_SPI_SUPPORT
static void spi_wait_busy(void)
{
#   ifdef SPI_TIMEOUT
    uint8_t timeout = 200;

    while (!(_SPSR0 & _BV(_SPIF0)) && timeout > 0)
        timeout--;

    if (timeout == 0)
        debug_printf("ERROR: spi timeout reached!\r\n");
#   else
    while (!(_SPSR0 & _BV(_SPIF0)));
#   endif

}

uint8_t noinline spi_send(uint8_t data)
{
    _SPDR0 = data;
    spi_wait_busy();

    return _SPDR0;
}
#endif  /* not SOFT_SPI_SUPPORT */

#endif /* DATAFLASH_SUPPORT || ENC28J60_SUPPORT || RFM12_SUPPORT 
    || SD_READER_SUPPORT */
