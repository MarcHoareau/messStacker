#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include "messStacker.h"

#define MESS_STAKER_VERSION "v0.0.01"
#define SIZE_MAX_DATA 57
#define SIZE_STACK 30

typedef struct {
    uint8_t cmd;
    char data[SIZE_MAX_DATA];
    uint8_t size;
    uint8_t checksum;
} Message;

Message stackMess[SIZE_STACK];

int lastPos = -1;
int curPos = 0;
int messCount = 0;

char* getMessStackerVersion(){
    return MESS_STAKER_VERSION;
}

bool sendMessage(uint8_t cmd, char* data ,uint8_t size){
    if (messCount >= SIZE_STACK) {
        return false;
    }

    lastPos = (lastPos + 1) % SIZE_STACK;

    stackMess[lastPos].cmd = cmd;
    stackMess[lastPos].size = size;

    for (uint8_t i = 0; i < size; i++) {
        stackMess[lastPos].data[i] = data[i];
    }

    stackMess[lastPos].checksum = checksumMessage(cmd, data, size);

    messCount++;

    return true;
}

bool haveMessage(){
    return messCount > 0;
} 

bool nextMessage(){

}

uint8_t curMessageCmd() {
    if (!haveMessage()) return 0;
    return stackMess[curPos].cmd;
}

uint8_t curMessageSize() {
    if (!haveMessage()) return 0;
    return stackMess[curPos].size;
}

uint8_t curMessageChecksum() {
    if (!haveMessage()) return 0;
    return stackMess[curPos].checksum;
}

bool curMessageData(char* buff, uint8_t lengthMax){
    if (!haveMessage() || lengthMax < stackMess[curPos].size) return false;
    for (uint8_t i = 0; i < stackMess[curPos].size; i++) {
        buff[i] = stackMess[curPos].data[i];
    }
    buff[stackMess[curPos].size] = '\0';
    return true;
}

uint8_t checksumMessage(uint8_t cmd, char* data ,uint8_t size){
    uint8_t sum = 0;
    sum += cmd;
    for (uint8_t i = 0; i < size; i++) {
        sum += (uint8_t)data[i];
    }
    return sum;
}