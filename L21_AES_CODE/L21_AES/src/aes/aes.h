/*
 * aes.h
 *
 * Created: 06-12-2017 11:33:25 PM
 *  Author: YURI
 */ 

#ifndef AES_H_
#define AES_H_

#include <asf.h>
#include <string.h>

void key_expansion_core(unsigned char* in, unsigned char i);
void key_expansion(unsigned char* input_key, unsigned char* expanded_keys);
void byte_substitution(unsigned char* state);
void shift_rows(unsigned char* state);
void mix_columns(unsigned char* state);
void add_roundkey(unsigned char* state, unsigned char* roundkey);
void aes_encrypt(unsigned char* message, unsigned char* key);



#endif /* AES_H_ */