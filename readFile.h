#ifndef ASS1_READFILE
#define ASS1_READFILE

#include "myStructLib.h"

// Function read datainfo from file to array DataInf_t and return num of member in DataInf_t array
int readDataInf(char*, DataInf_t* );

// Function read event form file to array DataEvent_t and return num of member in DataEvent_t array
int readEvent(char*, DataEvent_t* );

// Function process a event 
void processMini(DataInf_t* , DataEvent_t , int );

// Function process all events
void process(DataInf_t* db, DataEvent_t *ev, int numEvent, int numData ){
    for(int i=0; i< numEvent;i++){
        processMini(db, ev[i], numData);
    }
}


#endif