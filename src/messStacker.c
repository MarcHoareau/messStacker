#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "messStacker.h"

#define MESS_STAKER_VERSION "v0.0.01"
#define SIZE_MAX_DATA 57
#define SIZE_STACK 30

typedef struct st_message {
    int cmd;
    char* data; // malloc(SIZE_MAX_DATA*sizeof(char))
    int size;
    int checksum;
} Message;

Message stackMess;
stackMess.data = malloc(SIZE_STACK*sizeof(char));

int lastPos = -1;

int curPos = 0;

int messCount = 0;

char* getMessStackerVersion(){
    return MESS_STAKER_VERSION;
}

bool sendMessage(int cmd, char* data ,int size){

}

bool haveMessage(){
    if(messCount>=1) return TRUE;
    else return FALSE;
} 

bool nextMessage(){

}

int curMessageCmd(){

}

int curMessageSize(){

}

int curMessageChecksum(){

}

bool curMessageData(char* buff, int lengthMax){

}

int checksumMessage(int cmd, char* data ,int size){

}