/*
 * Debug_Serial_Init.h
 *
 * Created: 12/6/2017 4:59:03 PM
 *  Author: I41800
 */ 


#ifndef DEBUG_SERIAL_INIT_H_
#define DEBUG_SERIAL_INIT_H_

#include <asf.h>

void debug_serial_init(void);

struct usart_module usart_instance;

#endif /* DEBUG_SERIAL_INIT_H_ */