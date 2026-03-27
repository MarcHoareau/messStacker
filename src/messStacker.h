#ifndef MESS_STACKER
#define MESS_STACKER
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

char* getMessStackerVersion();

bool sendMessage(uint8_t cmd, char* data ,uint8_t size);

bool haveMessage(); 

bool nextMessage();

uint8_t curMessageCmd();

uint8_t curMessageSize();

uint8_t curMessageChecksum();

bool curMessageData(char* buff, int lengthMax);

uint8_t checksumMessage(uint8_t cmd, char* data ,uint8_t size);

#endif