#ifndef MESS_STACKER
#define MESS_STACKER
#include <stdbool.h>

char* getMessStackerVersion();

bool sendMessage(int cmd, char* data ,int size);

bool haveMessage(); 

bool nextMessage();

int curMessageCmd();

int curMessageSize();

int curMessageChecksum();

bool curMessageData(char* buff, int lengthMax);

int checksumMessage(int cmd, char* data ,int size);

#endif