#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "messStacker.h"

#define MESS_STAKER_VERSION "v0.0.01"
#define SIZE_MAX_DATA 57
#define SIZE_STACK 30

typedef struct st_message {
    unsigned int cmd;
    char* data; // malloc(SIZE_MAX_DATA*sizeof(char))
    unsigned int size;
    unsigned int checksum;
} Message;

Message stackMess;
stackMess.data = malloc(SIZE_STACK*sizeof(char));

int lastPos = -1;

int curPos = 0;

int messCount = 0;

char* getMessStackerVersion(){
    return MESS_STAKER_VERSION;
}

bool sendMessage(unsigned int cmd, char* data ,unsigned int size){

}

bool haveMessage(){
    if(messCount>=1) return TRUE;
    else return FALSE;
} 

bool nextMessage(){

}

unsigned int curMessageCmd(){

}

unsigned int curMessageSize(){

}

unsigned int curMessageChecksum(){

}

bool curMessageData(char* buff, int lengthMax){

}

unsigned int checksumMessage(unsigned int cmd, char* data ,unsigned int size){
    unsigned int sum = 0;
    sum += cmd;
    for (unsigned int i = 0; i < size; i++) {
        sum += (unsigned int)data[i];
    }

    return sum;
}