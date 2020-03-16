/*
 * debugSerialInit.c
 *
 * Created: 03-12-2017 04:21:33 PM
 *  Author: YURI
 */ 
#include "Debug_Serial_Init.h"

void debug_serial_init()
{
	struct usart_config config_usart;

	usart_get_config_defaults(&config_usart);
	config_usart.baudrate    = 9600;
	config_usart.mux_setting = EDBG_CDC_SERCOM_MUX_SETTING;
	config_usart.pinmux_pad0 = EDBG_CDC_SERCOM_PINMUX_PAD0;
	config_usart.pinmux_pad1 = EDBG_CDC_SERCOM_PINMUX_PAD1;
	config_usart.pinmux_pad2 = EDBG_CDC_SERCOM_PINMUX_PAD2;
	config_usart.pinmux_pad3 = EDBG_CDC_SERCOM_PINMUX_PAD3;

	stdio_serial_init(&usart_instance, EDBG_CDC_MODULE, &config_usart);
	
	usart_enable(&usart_instance);
}