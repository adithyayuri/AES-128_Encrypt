#include <asf.h>
#include "init/Debug_Serial_Init.h"
#include "aes/aes.h"

int main (void)
{
	system_init();
	debug_serial_init();
	
	printf("AES Lib test \r\n\r\n");
	
	unsigned char message[16] = {
		0x00, 0x01, 0x02, 0x03,
		0x04, 0x05, 0x06, 0x07,
		0x08, 0x09, 0x0A, 0x0B,
		0x0C, 0x0D, 0x0E, 0x0F
		};
	
	unsigned char key[16] = {
		0x00, 0x01, 0x02, 0x03,
		0x04, 0x05, 0x06, 0x07,
		0x08, 0x09, 0x0A, 0x0B,
		0x0C, 0x0D, 0x0E, 0x0F
		};

	printf("Message is \r\n");
	for (int i=0; i<16; i++)
	{
		printf("%02x \r\n", message[i]);
	}
	
	
	aes_encrypt(message, key); // Software AES Encryption
	
	
	printf("Cipher is \r\n");
	
	for (int i=0; i<16; i++)
	{
		printf("%02x \r\n", message[i]);
	}	
	
	
	while(1);
}
