/*
 * Automatically generated by make menuconfig: don't edit
 */
#define AUTOCONF_INCLUDED

/*
 * General Setup
 */
#define CONFIG_EXPERIMENTAL 1
#undef  CONFIG_EXPERT
#define ARCH ARCH_AVR
#define MCU atmega644
#define FREQ (16000000)
#define HARDWARE netio
#undef  CPU_SLEEP
#undef  SRAM_SUPPORT
#undef  SRAM_MEMTEST_ON_BOOT
#undef  BOOTLOADER_SUPPORT
#define BOOTLOADER_START_ADDRESS 0xe000
#undef  TEENSY_SUPPORT
#undef  SPI_TIMEOUT
#undef  USART_SPI_SUPPORT
#undef  SOFT_SPI_SUPPORT
#define VERSION_STRING_CHOICE USE_RELEASE_VERSION
#define VERSION_GIT ""
#undef  DEBUG_DISCARD_SOME
#undef  DEBUG
#define DEBUG_BAUDRATE (115200)
#undef  DEBUG_USE_SYSLOG
#undef  SOFT_UART_SUPPORT
#undef  DEBUG_HOOK
#undef  DEBUG_RESET_REASON
#undef  STATUSLEDS
#undef  STATUSLED_POWER_SUPPORT
#undef  STATUSLED_BOOTED_SUPPORT
#undef  STATUSLED_NETLINK_SUPPORT
#undef  STATUSLED_TX_SUPPORT
#undef  STATUSLED_RFM12_TX_SUPPORT
#undef  STATUSLED_ZBUS_TX_SUPPORT
#undef  STATUSLED_IRMP_TX_SUPPORT
#undef  STATUSLED_RX_SUPPORT
#undef  STATUSLED_RFM12_RX_SUPPORT
#undef  STATUSLED_ZBUS_RX_SUPPORT
#undef  STATUSLED_IRMP_RX_SUPPORT
#undef  STATUSLED_HB_ACT_SUPPORT
#undef  STATUSLED_HEARTBEAT_SUPPORT
#undef  STATUSLED_RFM12_TX_ACT_SUPPORT
#undef  STATUSLED_RFM12_RX_ACT_SUPPORT
#undef  STATUSLED_ZBUS_TX_ACT_SUPPORT
#undef  STATUSLED_ZBUS_RX_ACT_SUPPORT
#undef  STATUSLED_ECMD_ACT_SUPPORT
#undef  CRYPTO_SUPPORT
#undef  CAST5_SUPPORT
#undef  MD5_SUPPORT
#undef  SHA1_SUPPORT
#define VFS_SUPPORT 1
#undef  VFS_DF_SUPPORT
#define VFS_INLINE_SUPPORT 1
#undef  CONFIG_INLINE_SUPPORT
#undef  VFS_CONFIG_INLINE_SUPPORT
#undef  MOTD_INLINE_SUPPORT
#undef  RFM12_INLINE_SUPPORT
#undef  I2C_INLINE_SUPPORT
#define VFS_IO_INLINE_SUPPORT 1
#undef  KTY_INLINE_SUPPORT
#define ADC_INLINE_SUPPORT 1
#undef  ONEWIRE_INLINE_SUPPORT
#undef  CAMERA_INLINE_SUPPORT
#undef  NAMED_PIN_INLINE_SUPPORT
#undef  STELLA_INLINE_SUPPORT
#undef  MOTORCURTAIN_INLINE_SUPPORT
#undef  MSR1_INLINE_SUPPORT
#undef  TO1_INLINE_SUPPORT
#undef  MCUF_INLINE_SUPPORT
#undef  GAME_INPUT_INLINE_SUPPORT
#undef  UPNP_INLINE_SUPPORT
#undef  LCD_INLINE_SUPPORT
#undef  NMEA_INLINE_SUPPORT
#undef  PWM_SERVO_INLINE_SUPPORT
#undef  CW_INLINE_SUPPORT
#define VFS_INLINE_INLINESVG_SUPPORT 1
#undef  VFS_INLINE_HTML_CLEAN_SUPPORT
#undef  VFS_INLINE_OBSOLETE_BROWSER_SUPPORT
#undef  DEBUG_INLINE_DUMMY
#undef  DEBUG_INLINE_GZ
#undef  DEBUG_INLINE_DISABLE_GZ
#undef  VFS_HOST_SUPPORT
#undef  VFS_SD_SUPPORT
#undef  SD_READER_SUPPORT
#undef  SD_READ_TIMEOUT
#undef  SD_PING_READ
#undef  VFS_EEPROM_SUPPORT
#undef  VFS_EEPROM_RAW_SUPPORT
#undef  VFS_DC3840_SUPPORT
#undef  DATAFLASH_SUPPORT
#undef  DEBUG_FS
#undef  DEBUG_FS_INODETABLE
#undef  DEBUG_FS_MARK
#undef  VFS_EEPROM_DEBUG_SUPPORT
#undef  DEBUG_SD_READER
#undef  PAM_SUPPORT
#undef  CONTROL6_SUPPORT

/*
 * Network
 */
#define CONF_HOSTNAME "Waldmann"
#define NET_MAX_FRAME_LENGTH (500)
#define ENC28J60_SUPPORT 1
#define CONF_ENC_MAC  "\x00\x22\xf9\x01\x90\x6e"
#undef  IPV6_STATIC_SUPPORT
#define set_CONF_ENC_IP(ip) uip_ipaddr((ip), 192,168,0,170 )
#define CONF_ENC_IP "192.168.0.170"
#define set_CONF_ENC_IP4_NETMASK(ip) uip_ipaddr((ip), 255,255,255,0 )
#define CONF_ENC_IP4_NETMASK "255.255.255.0"
#undef  IEEE8021Q_SUPPORT
#undef  DEBUG_ENC28J60
#undef  DEBUG_INTERRUPT
#undef  DEBUG_REV4_WORKAROUND
#define ETHERNET_SUPPORT 1
#undef  TAP_SUPPORT
#define CONF_TAP_MAC  "\xac\xde\x48\xfd\x0f\xd0"
#undef  IPV6_STATIC_SUPPORT
#define set_CONF_TAP_IP(ip) uip_ipaddr((ip), 192,168,23,244 )
#define CONF_TAP_IP "192.168.23.244"
#define set_CONF_TAP_IP4_NETMASK(ip) uip_ipaddr((ip), 255,255,255,0 )
#define CONF_TAP_IP4_NETMASK "255.255.255.0"
#define set_CONF_TAP_LOCALIP(ip) uip_ipaddr((ip), 192,168,23,1 )
#define CONF_TAP_LOCALIP "192.168.23.1"
#undef  IEEE8021Q_SUPPORT
#undef  RFM12_IP_SUPPORT
#define CONF_RFM12_FREQ RFM12_FREQ_433920
#undef  CONF_RFM12_SLOW_SPI
#undef  CONF_RFM12B_SUPPORT
#define CONF_RFM12_BAUD (19200)
#define set_CONF_RFM12_IP(ip) uip_ipaddr((ip), 192,168,5,1 )
#define CONF_RFM12_IP "192.168.5.1"
#define set_CONF_RFM12_IP4_NETMASK(ip) uip_ipaddr((ip), 255,255,255,0 )
#define CONF_RFM12_IP4_NETMASK "255.255.255.0"
#undef  RFM12_SOURCE_ROUTE_ALL
#undef  RFM12_PCKT_FWD
#undef  RFM12_ARP_PROXY
#undef  RFM12_DISABLE
#undef  RFM12_RAW_SUPPORT
#undef  USB_SUPPORT
#undef  USB_KEYBOARD_SUPPORT
#undef  USB_HID_KEYBOARD_SEQUENCE_SUPPORT
#undef  USB_HID_KEYBOARD_STATIC_SUPPORT
#undef  USB_HID_KEYBOARD_ECMD_SUPPORT
#undef  USB_MOUSE_SUPPORT
#undef  USB_MOUSE_SEQUENCE_SUPPORT
#undef  USB_NET_SUPPORT
#undef  DEBUG_USB_HID_KEYBOARD
#undef  DEBUG_USB_HID_MOUSE
#undef  ZBUS_SUPPORT
#undef  ZBUS_RAW_SUPPORT
#undef  ROUTER_SUPPORT
#define UIP_SUPPORT 1
#define NET_SUPPORT 1
#undef  IPV6_SUPPORT
#define IPV4_SUPPORT 1
#undef  IP_FORWARDING_SUPPORT
#undef  UIP_TIMEOUT_SUPPORT
#define set_CONF_ETHERRAPE_GATEWAY(ip) uip_ipaddr((ip), 192,168,0,1 )
#define CONF_ETHERRAPE_GATEWAY "192.168.0.1"
#undef  UIP_MULTI_STACK
#undef  IPCHAIR_SUPPORT
#undef  IPCHAIR_MASQ
#define TCP_SUPPORT 1
#undef  UDP_SUPPORT
#undef  BROADCAST_SUPPORT
#define ICMP_SUPPORT 1
#undef  DNS_SUPPORT
#define set_CONF_DNS_SERVER(ip) uip_ipaddr((ip), 192,168,23,254 )
#define CONF_DNS_SERVER "192.168.23.254"
#undef  BOOTP_SUPPORT
#undef  BOOTP_TO_EEPROM_SUPPORT
#undef  DHCP_SUPPORT
#undef  OPENVPN_SUPPORT
#define CONF_OPENVPN_KEY "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
#define CONF_OPENVPN_HMAC_KEY "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
#define set_CONF_OPENVPN_IP(ip) uip_ipaddr((ip), 0,0,0,0 )
#define CONF_OPENVPN_IP "0.0.0.0"
#define set_CONF_OPENVPN_IP4_NETMASK(ip) uip_ipaddr((ip), 255,255,255,0 )
#define CONF_OPENVPN_IP4_NETMASK "255.255.255.0"
#undef  OPENVPN_STATIC_REMOTE
#undef  DEBUG_NET
#undef  DEBUG_NET_CONFIG
#undef  DEBUG_NET_IP6
#undef  DEBUG_OPENVPN
#undef  DEBUG_ROUTER
#undef  DEBUG_UIP
#undef  DEBUG_NTP
#undef  DEBUG_UNKNOWN_PACKETS

/*
 * I/O
 */
#define PORTIO_SCHEME PORTIO_SIMPLE
#define PORTIO_SIMPLE_SUPPORT 1
#undef  NAMED_PIN_SUPPORT
#undef  TTY_SUPPORT
#define TTY_COLS (16)
#define TTY_LINES (4)
#undef  TTY_LL_HD44780
#undef  TTY_LL_S1D15G10
#undef  TTY_LL_S1D13305
#undef  TTY_LL_VT100_TELNET
#undef  DEBUG_TTY_LAYER
#undef  HC595_SUPPORT
#define HC595_REGISTERS (5)
#undef  HC165_SUPPORT
#undef  HC165_INVERSE_OUTPUT
#define HC165_REGISTERS (1)
#define ADC_SUPPORT 1
#define ADC_REF ADC_AREF
#undef  HR20_TEMP_SUPPORT
#undef  NEED_TEMP2TEXT
#undef  SMS_SUPPORT
#define SMS_USE_USART 0
#undef  DEBUG_SMS
#undef  KTY_SUPPORT
#undef  ADS7822_SUPPORT
#undef  DAC_SUPPORT
#undef  TLC5620_SUPPORT
#undef  LTC1257_SUPPORT
#define CONF_LTC1257_NUM_DEVICES (4)
#undef  DEBUG_LTC1257_CORE
#undef  DEBUG_LTC1257_ECMD

/*
 * LCD Displays
 */
#undef  HD44780_SUPPORT
#undef  HD44780_BACKLIGHT_INV
#undef  HR20_LCD_SUPPORT_FULL
#undef  S1D15G10_SUPPORT
#undef  ST7626_SUPPORT
#undef  S1D13305_SUPPORT
#undef  DEBUG_S1D13305
#undef  LCD_SUPPORT
#undef  DEBUG_HD44780
#undef  DEBUG_LCD_MENU
#undef  I2C_MASTER_SUPPORT
#undef  I2C_DETECT_SUPPORT
#undef  I2C_GENERIC_SUPPORT
#undef  I2C_24CXX_SUPPORT
#undef  I2C_LM75_SUPPORT
#undef  I2C_DS1631_SUPPORT
#undef  I2C_DS13X7_SUPPORT
#undef  I2C_TSL2550_SUPPORT
#undef  I2C_PCA9531_SUPPORT
#undef  I2C_PCA9685_SUPPORT
#undef  I2C_PCF8574X_SUPPORT
#undef  I2C_MAX7311_SUPPORT
#undef  I2C_UDP_SUPPORT
#undef  DEBUG_I2C
#undef  CAMERA_SUPPORT
#undef  DC3840_SUPPORT
#undef  DC3840_HIGH_COMPRESSION
#undef  DC3840_BLACK_WHITE
#define DC3840_USE_USART 0
#undef  DC3840_UDP_DEBUG
#undef  FS20_SUPPORT
#undef  FS20_SEND_SUPPORT
#undef  FHT_SEND_SUPPORT
#undef  FS20_RECEIVE_SUPPORT
#undef  FS20_RECEIVE_SENDER
#define CONF_FS20_SERVICE "merkur"
#define CONF_FS20_PORT (2701)
#undef  FS20_RECEIVE_WS300_SUPPORT
#undef  DEBUG_FS20_REC
#undef  DEBUG_ECMD_FS20
#undef  DEBUG_FS20_REC_QUEUE
#undef  DEBUG_FS20_REC_VERBOSE
#undef  DEBUG_FS20_SENDER
#undef  DEBUG_FS20_WS300
#undef  DEBUG_FS20_WS300_VERBOSE
#undef  IR_SUPPORT
#undef  RC5_SUPPORT
#undef  RC5_SUPPORT
#undef  RC5_UDP_SUPPORT
#define set_CONF_RC5_SERVER(ip) uip_ipaddr((ip), 192,168,100,3 )
#define CONF_RC5_SERVER "192.168.100.3"
#undef  DEBUG_RC5
#undef  IRMP_SUPPORT
#undef  IRMP_RX_SUPPORT
#undef  IRMP_TX_SUPPORT
#undef  IRMP_EXTERNAL_MODULATOR
#undef  IRMP_ECMD
#undef  IRMP_SUPPORT_SIRCS_PROTOCOL
#undef  IRMP_SUPPORT_NEC_PROTOCOL
#undef  IRMP_SUPPORT_NEC16_PROTOCOL
#undef  IRMP_SUPPORT_NEC42_PROTOCOL
#undef  IRMP_SUPPORT_JVC_PROTOCOL
#undef  IRMP_SUPPORT_SAMSUNG_PROTOCOL
#undef  IRMP_SUPPORT_MATSUSHITA_PROTOCOL
#undef  IRMP_SUPPORT_KASEIKYO_PROTOCOL
#undef  IRMP_SUPPORT_DENON_PROTOCOL
#undef  IRMP_SUPPORT_RECS80_PROTOCOL
#undef  IRMP_SUPPORT_RECS80EXT_PROTOCOL
#undef  IRMP_SUPPORT_RC5_PROTOCOL
#undef  IRMP_SUPPORT_RC6_PROTOCOL
#undef  IRMP_SUPPORT_RC6A_PROTOCOL
#undef  IRMP_SUPPORT_NUBERT_PROTOCOL
#undef  IRMP_SUPPORT_BANG_OLUFSEN_PROTOCOL
#undef  IRMP_SUPPORT_GRUNDIG_PROTOCOL
#undef  IRMP_SUPPORT_NOKIA_PROTOCOL
#undef  IRMP_SUPPORT_SIEMENS_PROTOCOL
#undef  IRMP_SUPPORT_FDC_PROTOCOL
#undef  IRMP_SUPPORT_RCCAR_PROTOCOL
#undef  IRMP_SUPPORT_NIKON_PROTOCOL
#undef  IRMP_SUPPORT_RUWIDO_PROTOCOL
#undef  IRMP_SUPPORT_IR60_PROTOCOL
#undef  IRMP_SUPPORT_KATHREIN_PROTOCOL
#undef  IRMP_SUPPORT_NETBOX_PROTOCOL
#undef  IRMP_SUPPORT_LEGO_PROTOCOL
#undef  IRMP_SUPPORT_THOMSON_PROTOCOL
#undef  DEBUG_IRMP
#undef  PSB2186_SUPPORT
#undef  PWM_SUPPORT
#undef  PWM_GENERAL_SUPPORT
#undef  PWM_GENERAL_INVERT_SUPPORT
#undef  PWM_GENERAL_FADING_SUPPORT
#undef  CH_A_PWM_GENERAL_SUPPORT
#undef  CH_B_PWM_GENERAL_SUPPORT
#undef  CH_C_PWM_GENERAL_SUPPORT
#undef  PWM_WAV_SUPPORT
#undef  VFS_PWM_WAV_SUPPORT
#undef  PWM_MELODY_SUPPORT
#undef  ENTCHEN_PWM_MELODY_SUPPORT
#undef  TETRIS_PWM_MELODY_SUPPORT
#undef  PWM_SERVO_SUPPORT
#define PWM_SERVOS (1)
#undef  PWM_SERVO_INVERT
#undef  PWM_SERVO_DEFAULT_ENABLED
#undef  PWM_FREQ_SUPPORT
#undef  PWM_DTMF_SUPPORT
#undef  DEBUG_PWM
#undef  DEBUG_PWM_SERVO
#undef  ONEWIRE_SUPPORT
#undef  ONEWIRE_DETECT_SUPPORT
#undef  ONEWIRE_DS2502_SUPPORT
#undef  ONEWIRE_DS2450_SUPPORT
#undef  ONEWIRE_DETECT_ECMD_SUPPORT
#undef  ONEWIRE_POLLING_SUPPORT
#undef  DEBUG_ECMD_OW_ROM
#undef  DEBUG_ECMD_OW_LIST
#undef  DEBUG_OW_DS2450_CORE
#undef  DEBUG_OW_DS2450_ECMD
#undef  DEBUG_OW_POLLING
#undef  HR20_INPUT_SUPPORT
#undef  PS2_SUPPORT
#undef  PS2_GERMAN_LAYOUT
#undef  DEBUG_PS2
#undef  BUTTONS_INPUT_SUPPORT
#define CONF_NUM_BUTTONS ()
#undef  GAME_INPUT_SUPPORT
#undef  JOYSTICK_DIGITAL_SUPPORT
#undef  DEBUG_JOYSTICK_DIGITAL
#undef  DEBUG_GAME_INPUT
#undef  RFM12_ASK_SUPPORT
#undef  RFM12_ASK_SENDER_SUPPORT
#undef  RFM12_ASK_2272_SUPPORT
#undef  RFM12_ASK_1527_SUPPORT
#undef  RFM12_ASK_TEVION_SUPPORT
#undef  RFM12_ASK_INTERTECHNO_SUPPORT
#undef  RFM12_ASK_EXTERNAL_FILTER_SUPPORT
#undef  RFM12_ASK_SENSING_SUPPORT
#undef  DEBUG_ASK_SENSE
#undef  SHT_SUPPORT
#undef  ZACWIRE_SUPPORT
#undef  ZACWIRE_RAW_SUPPORT
#undef  ZACWIRE_CONVERT306_SUPPORT
#undef  ZACWIRE_CONVERT506_SUPPORT
#undef  ULTRASONIC_SUPPORT
#undef  DEBUG_ULTRASONIC
#undef  HBRIDGE_SUPPORT
#undef  DEBUG_HBRIDGE
#undef  MCUF_SUPPORT
#undef  MCUF_SERIAL_SUPPORT
#define MCUF_USE_USART 0
#undef  MCUF_OUTPUT_SUPPORT
#undef  BLP_SUPPORT
#undef  LEDRG_SUPPORT
#undef  MCUF_SERIAL_WORKAROUND_FOR_BAD_MCUF_UDP_PACKETS
#undef  MCUF_SCROLLTEXT_SUPPORT
#define CONF_MCUF_SCROLLTEXT_STARTUP "Hi I am your ethersex ;-) "
#define CONF_MCUF_SCROLLTEXT_STARTUP_COLOR (240)
#define CONF_MCUF_SCROLLTEXT_STARTUP_BG_COLOR (1)
#define CONF_MCUF_SCROLLTEXT_STARTUP_SPEED (2)
#undef  MCUF_CLOCK_SUPPORT
#undef  MCUF_CLOCK_AUTOSTART_SUPPORT
#undef  MCUF_MODUL_SUPPORT
#undef  MCUF_MODUL_CRON_SUPPORT
#define MCUF_MODUL_DISPLAY_MODE_CRON MCUF_MODUL_DISPLAY_MODE_CRON_RANDOM
#undef  MCUF_MODUL_DISPLAY_MODE_SUPPORT
#define MCUF_MODUL_DISPLAY_MODE MCUF_MODUL_DISPLAY_MODE_RANDOM
#undef  MCUF_TEST_GAME_INPUT
#undef  MCUF_CHESS_SUPPORT
#undef  MCUF_BOX_SUPPORT
#undef  MCUF_CLEAN_SUPPORT
#undef  MCUF_SPIRAL_SUPPORT
#undef  MCUF_IMAGE_SUPPORT
#undef  MCUF_MODUL_BORG16_SUPPORT
#undef  MCUF_MODUL_BORG16_XONI_STUDY_SUPPORT
#undef  MCUF_MODUL_BORG16_SNAKE_SUPPORT
#undef  MCUF_MODUL_BORG16_SNAKE_INTERACTIVE_SUPPORT
#undef  DEBUG_MCUF

/*
 * Protocols
 */
#undef  ARTNET_SUPPORT
#define CONF_ARTNET_PORT (6454)
#define CONF_ARTNET_MAX_PORTS (4)
#define CONF_ARTNET_MAX_DATA_LENGTH (511)
#define CONF_ARTNET_MAX_CHANNELS (512)
#define CONF_ARTNET_OEM_ID "0xB108"
#define CONF_ARTNET_INUNIVERSE (1)
#define CONF_ARTNET_OUTUNIVERSE (0)
#undef  DEBUG_ARTNET
#undef  DALI_SUPPORT
#undef  DALI_RAW_SUPPORT
#undef  DALI_RECEIVE_SUPPORT
#undef  DMX_SUPPORT
#define DMX_OUTPUT_UNIVERSE (1)
#define DMX_USE_USART 0
#define ECMD_PARSER_SUPPORT 1
#undef  ECMD_REMOVE_BACKSPACE_SUPPORT
#undef  ALIASCMD_SUPPORT
#undef  ECMD_PAM_SUPPORT
#undef  ECMD_SCRIPT_SUPPORT
#undef  ECMD_SERIAL_USART_SUPPORT
#define ECMD_TCP_SUPPORT 1
#define ECMD_TCP_PORT (2701)
#undef  ECMD_UDP_SUPPORT
#undef  ECMD_SERIAL_I2C_SUPPORT
#undef  ECMD_USB_SUPPORT
#undef  ECMD_JABBER_SUPPORT
#undef  ECMD_IRC_SUPPORT
#undef  ECMD_SMS_SUPPORT
#undef  ECMD_EEPROM_SUPPORT
#undef  ECMD_SENDER_SUPPORT
#undef  UECMD_SENDER_SUPPORT
#undef  DISABLE_IPCONF_SUPPORT
#undef  DISABLE_REBOOT_SUPPORT
#undef  IPSTATS_SUPPORT
#undef  FREE_SUPPORT
#undef  ECMD_MIRROR_REQUEST
#undef  DEBUG_ECMD
#undef  DEBUG_ECMD_FS20
#undef  DEBUG_ECMD_IP
#undef  DEBUG_ECMD_MAC
#undef  DEBUG_ECMD_NET
#undef  DEBUG_ECMD_OW_LIST
#undef  DEBUG_ECMD_OW_ROM
#undef  DEBUG_ECMD_PORTIO
#undef  DEBUG_ECMD_RC5
#undef  DEBUG_ECMD_SCRIPT
#undef  FNORDLICHT_BASIC_SUPPORT
#define FNORDLICHT_BAUDRATE (19200)
#undef  FNORDLICHT_SUPPORT
#define CONF_FNORDLICHTER (1)
#undef  FNORDLICHT_SERVO_SUPPORT
#undef  DEBUG_FNORDLICHT
#undef  HTTPLOG_SUPPORT
#define CONF_HTTPLOG_SERVICE "volkszaehler.org"
#define CONF_HTTPLOG_PATH "/httplog/httplog.php"
#undef  CONF_HTTPLOG_INCLUDE_TIMESTAMP
#undef  CONF_HTTPLOG_INCLUDE_UUID
#define CONF_HTTPLOG_UUID "12345678-9ABC-DEF0-1234-56789ABCDEF0"
#undef  DEBUG_HTTPLOG
#undef  IRC_SUPPORT
#define set_CONF_IRC_IP(ip) uip_ipaddr((ip), 192,168,23,254 )
#define CONF_IRC_IP "192.168.23.254"
#define CONF_IRC_PORT (6667)
#define CONF_IRC_CHANNEL "ethersex"
#define CONF_IRC_USERNAME "ethersex"
#define CONF_IRC_NICKNAME "ethersex"
#define CONF_IRC_REALNAME "Ethersex Wollmilchsau"
#undef  IRC_GREET_SUPPORT
#undef  DEBUG_IRC
#undef  MDNS_SD_SUPPORT
#undef  MODBUS_SUPPORT
#undef  MYSQL_SUPPORT
#define set_CONF_MYSQL_IP(ip) uip_ipaddr((ip), 192,168,23,254 )
#define CONF_MYSQL_IP "192.168.23.254"
#define CONF_MYSQL_USERNAME "root"
#define CONF_MYSQL_PASSWORD "password"
#define CONF_MYSQL_SCHEMA "mavisdb"
#undef  DEBUG_MYSQL
#undef  NETSTAT_SUPPORT
#define set_CONF_NETSTAT_SERVICE_IP(ip) uip_ipaddr((ip), 188,40,33,175 )
#define CONF_NETSTAT_SERVICE_IP "188.40.33.175"
#define CONF_NETSTAT_SERVICE "ethersex.de"
#define CONF_NETSTAT_API "/~habo/stat/"
#undef  DEBUG_NETSTAT
#undef  SOAP_SUPPORT
#undef  SNMP_SUPPORT
#undef  SENDMAIL_SUPPORT
#define set_CONF_SENDMAIL_IP(ip) uip_ipaddr((ip), 78,47,210,246 )
#define CONF_SENDMAIL_IP "78.47.210.246"
#define CONF_SENDMAIL_FROM "root@sex.metafnord.de"
#define CONF_SENDMAIL_TO "stesie@brokenpipe.de"
#undef  SENDMAIL_AUTH_SUPPORT
#undef  DEBUG_SENDMAIL
#undef  SMS77_SUPPORT
#define CONF_SMS77_SERVICE "gateway.sms77.de"
#define CONF_SMS77_USER ""
#define CONF_SMS77_PASS ""
#define CONF_SMS77_TO ""
#define CONF_SMS77_TYPE_CHOICE CONF_SMS77_TYPE_BASICPLUS
#define CONF_SMS77_TYPE "basicplus"
#undef  SMS77_EEPROM_SUPPORT
#undef  DEBUG_SMS77
#undef  SYSLOG_SUPPORT
#define set_CONF_SYSLOG_SERVER(ip) uip_ipaddr((ip), 192,168,23,73 )
#define CONF_SYSLOG_SERVER "192.168.23.73"
#undef  TWITTER_SUPPORT
#define CONF_TWITTER_SERVICE "identi.ca"
#define CONF_TWITTER_API "/api"
#define CONF_TWITTER_USERNAME "ethersex"
#define CONF_TWITTER_PASSWORD ""
#define CONF_TWITTER_AUTH "ZXRoZXJzZXg6"
#undef  DEBUG_TWITTER
#undef  USTREAM_SUPPORT
#define set_CONF_USTREAM_IP(ip) uip_ipaddr((ip), 205,188,234,7 )
#define CONF_USTREAM_IP "205.188.234.7"
#define CONF_USTREAM_PORT (80)
#undef  DEBUG_USTREAM
#undef  YPORT_SUPPORT
#define YPORT_USE_USART 0
#define YPORT_PORT (7970)
#define YPORT_BAUDRATE (115200)
#define YPORT_BUFFER_LEN (32)
#undef  DEBUG_YPORT
#undef  MSR1_SUPPORT
#define MSR1_USE_USART 0
#undef  DEBUG_MSR1
#undef  TO1_SUPPORT
#define TO1_USE_USART 0
#define TO1_SENSOR_COUNT (1)
#undef  DEBUG_TO1
#undef  SERIAL_LINE_LOG_SUPPORT
#define SERIAL_LINE_LOG_TIMEOUT (20)
#define SERIAL_LINE_LOG_EOL "\x0A"
#define SERIAL_LINE_LOG_COUNT (60)
#define SERIAL_LINE_LOG_BAUDRATE (9600)
#undef  SERIAL_LINE_LOG_SPACE_COMPRESSION
#undef  NMEA_SUPPORT
#define NMEA_USE_USART 0
#undef  STELLA_PROTOCOL_SUPPORT
#define UDP_STELLA_PORT (2702)
#undef  IOUDP_PROTOCOL_SUPPORT
#define UDP_IO_PORT (2703)
#undef  MOTORCURTAIN_PROTOCOL_SUPPORT
#define UDP_MOTORCURTAIN_PORT (2704)
#undef  CW_SUPPORT
#define CW_WPM (12)
#undef  CW_BOOT_SUPPORT
#undef  CW_BEACON_SUPPORT
#undef  CW_PIN_SUPPORT
#undef  CW_PWM_FREQ_SUPPORT
#undef  CW_RFM12_ASK_SUPPORT
#undef  DEBUG_CW

/*
 * Applications
 */
#undef  APP_SAMPLE_SUPPORT
#undef  APP_SAMPLE_INIT_AUTOSTART_SUPPORT
#undef  APP_SAMPLE_PERIODIC_AUTOSTART_SUPPORT
#undef  DEBUG_APP_SAMPLE
#undef  BULBDIAL_SUPPORT
#undef  DEBUG_BULBDIAL
#undef  CLOCK_SUPPORT
#undef  CLOCK_DATETIME_SUPPORT
#undef  CLOCK_CRYSTAL_SUPPORT
#undef  CLOCK_CPU_SUPPORT
#undef  CLOCK_NTP_ADJUST_SUPPORT
#undef  DCF77_SUPPORT
#undef  DEBUG_DCF77
#undef  NTP_SUPPORT
#undef  NTPD_SUPPORT
#undef  WHM_SUPPORT
#undef  UPTIME_SUPPORT
#undef  DEBUG_NTP_ADJUST
#undef  CRON_SUPPORT
#undef  CRON_DEFAULT_UTC
#undef  CRON_SUPPORT_TEST
#undef  CRON_VFS_SUPPORT
#undef  DEBUG_CRON_DRYRUN
#undef  DEBUG_CRON
#undef  CRON_STATIC_SUPPORT
#undef  DYNDNS_SUPPORT
#undef  DMX_STORAGE_SUPPORT
#define DMX_STORAGE_UNIVERSES (2)
#define DMX_STORAGE_CHANNELS (64)
#define DMX_STORAGE_SLOTS (5)
#undef  DMX_STORAGE_DEBUG
#undef  DMX_EFFECT_SUPPORT
#undef  DMX_EFFECT_RAINBOW
#undef  DMX_EFFECT_RANDOM
#undef  UDP_ECHO_NET_SUPPORT
#undef  WOL_SUPPORT
#undef  MOTD_SUPPORT
#define CONF_MOTD_DEFAULT "empty"
#define CONF_MOTD_SIZE (50)
#define HTTPD_SUPPORT 1
#undef  HTTPD_SOAP_SUPPORT
#undef  HTTPD_AUTH_SUPPORT
#undef  HTTP_SD_DIR_SUPPORT
#undef  MIME_SUPPORT
#define HTTPD_PORT (80)
#define HTTPD_ALTERNATE_PORT (8000)
#undef  HTTP_FAVICON_SUPPORT
#undef  DEBUG_HTTPD
#undef  JABBER_SUPPORT
#define set_CONF_JABBER_IP(ip) uip_ipaddr((ip), 78,47,210,246 )
#define CONF_JABBER_IP "78.47.210.246"
#define CONF_JABBER_HOSTNAME "jabber.zerties.org"
#define CONF_JABBER_USERNAME "esex"
#define CONF_JABBER_PASSWORD "password"
#define CONF_JABBER_RESOURCE "ethersex"
#define CONF_JABBER_BUDDY "stesie@jabber.zerties.org"
#undef  JABBER_EEPROM_SUPPORT
#undef  JABBER_STARTUP_MESSAGE_SUPPORT
#undef  JABBER_LAST_SUPPORT
#undef  JABBER_VERSION_SUPPORT
#undef  DEBUG_JABBER
#undef  MOODLIGHT_SUPPORT
#define MOODLIGHT_CHANGEGAP_INIT (120)
#undef  STELLA_SUPPORT
#define STELLA_FREQ stella_normal
#define STELLA_START stella_start_zero
#define STELLA_FADE_STEP_INIT (10)
#define STELLA_FADE_FUNCTION_INIT stella_fade_func_0
#undef  DEBUG_STELLA
#undef  STARBURST_SUPPORT
#undef  STARBURST_PCA9685
#undef  STARBURST_DEBUG
#undef  MOTORCURTAIN_SUPPORT
#undef  MOTORCURTAIN_INVERTED_MOTOR
#undef  MOTORCURTAIN_INVERTED_DIRECTION
#undef  MOTORCURTAIN_INVERTED_SENSORS
#undef  MOTORCURTAIN_INVERTED_SAFETYSWITCH
#undef  MOTORCURTAIN_PROGRESS_SUPPORT
#undef  TFTP_SUPPORT
#undef  TFTPOMATIC_SUPPORT
#undef  UPNP_SUPPORT
#define set_CONF_UPNP_MULTICAST_IP(ip) uip_ipaddr((ip), 239,255,255,250 )
#define CONF_UPNP_MULTICAST_IP "239.255.255.250"
#define CONF_UPNP_SCHEME_FILENAME "/ih.xml"
#undef  DEBUG_UPNP
#undef  WATCHCAT_SUPPORT
#undef  VNC_SUPPORT
#define VNC_PORT (5900)
#undef  GUI_SUPPORT
#undef  DEBUG_VNC
#undef  WATCHASYNC_SUPPORT
#define CONF_WATCHASYNC_SERVER "volkszaehler.org"
#define set_WATCHASYNC_SERVER_IP(ip) uip_ipaddr((ip), 78,46,142,232 )
#define WATCHASYNC_SERVER_IP "78.46.142.232"
#define CONF_WATCHASYNC_PORT (80)
#define CONF_WATCHASYNC_METHOD "POST"
#define CONF_WATCHASYNC_PATH "/path/to/volkszaehler/backend.php/data/"
#define CONF_WATCHASYNC_END_PATH ""
#undef  CONF_WATCHASYNC_TIMESTAMP
#undef  CONF_WATCHASYNC_SUMMARIZE
#define CONF_WATCHASYNC_BUFFERSIZE (64)
#undef  CONF_WATCHASYNC_EDGDETECTVIAPOLLING

/*
 * Pin Configuration
 */

/*
 * Port A
 */
#undef  CONF_WATCHASYNC_PA0
#undef  CONF_WATCHASYNC_PA1
#undef  CONF_WATCHASYNC_PA2
#undef  CONF_WATCHASYNC_PA3
#undef  CONF_WATCHASYNC_PA4
#undef  CONF_WATCHASYNC_PA5
#undef  CONF_WATCHASYNC_PA6
#undef  CONF_WATCHASYNC_PA7

/*
 * Port B
 */
#undef  CONF_WATCHASYNC_PB0
#undef  CONF_WATCHASYNC_PB1
#undef  CONF_WATCHASYNC_PB2
#undef  CONF_WATCHASYNC_PB3
#undef  CONF_WATCHASYNC_PB4
#undef  CONF_WATCHASYNC_PB5
#undef  CONF_WATCHASYNC_PB6
#undef  CONF_WATCHASYNC_PB7

/*
 * Port C
 */
#undef  CONF_WATCHASYNC_PC0
#undef  CONF_WATCHASYNC_PC1
#undef  CONF_WATCHASYNC_PC2
#undef  CONF_WATCHASYNC_PC3
#undef  CONF_WATCHASYNC_PC4
#undef  CONF_WATCHASYNC_PC5
#undef  CONF_WATCHASYNC_PC6
#undef  CONF_WATCHASYNC_PC7

/*
 * Port D
 */
#undef  CONF_WATCHASYNC_PD0
#undef  CONF_WATCHASYNC_PD1
#undef  CONF_WATCHASYNC_PD2
#undef  CONF_WATCHASYNC_PD3
#undef  CONF_WATCHASYNC_PD4
#undef  CONF_WATCHASYNC_PD5
#undef  CONF_WATCHASYNC_PD6
#undef  CONF_WATCHASYNC_PD7
#undef  DEBUG_WATCHASYNC
#undef  GLCD_MENU_SUPPORT
#undef  GLCDMENU_UMLAUTS
#undef  GLCDMENU_MOUSE_SUPPORT
#undef  GLCDMENU_S1D13305
#undef  DEBUG_GLCD_MENU
#undef  LOME6_SUPPORT
#undef  LOME6_LCD_SUPPORT
#undef  LOME6_ONEWIRE_SUPPORT
#define CONF_SENSOR_PSU "1015ccf501080065"
#define CONF_SENSOR_AIR "10567cf501080006"
#define CONF_SENSOR_RAM "10cba7f5010800d3"
#define CONF_LOME6_POD (0)
#define CONF_TIME2PRESS_RESET (40)
#define CONF_TIME2PRESS_POWER (40)
#define CONF_TIME2PRESS_POWERL (3)
#undef  PROJECTOR_SANYO_Z700_SUPPORT
#undef  DEBUG_SANYO_Z700
#undef  FREQCOUNT_SUPPORT
#define FREQCOUNT_CHANNELS (1)
#undef  FREQCOUNT_BOOT_ON
#define FREQCOUNT_AVERAGE (8)
#undef  FREQCOUNT_NOSLOW_SUPPORT
#undef  FREQCOUNT_DUTY_SUPPORT
#undef  FREQCOUNT_MOVING_AVERAGE_SUPPORT
#undef  FREQCOUNT_DEBUGGING
#undef  RFM12_SUPPORT
#define IPV4_SUPPORT 1
