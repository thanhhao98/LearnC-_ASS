#ifndef ASS1_MYSTRUCTLIB
#define ASS1_MYSTRUCTLIB

#include <string>
#include <string.h>
#include <iomanip>



#define MAX_SIZE_EVENT 6
#define MAX_SIZE_ID 8
#define MAX_LINE_FILE 5000000

using namespace std;

typedef struct DataInf{
    char id[MAX_SIZE_ID];
    double longitude;
    double latitude;
    void setIdFromString(string str){
        strncpy(id, str.data(), MAX_SIZE_ID - 1);
    }
    void setIdFromChar(char* c){
        strncpy(id, c, MAX_SIZE_ID - 1);
    }
} DataInf_t;



typedef struct DataEvent{
    char code[MAX_SIZE_EVENT];
    void setEventFromString(string str){
        strncpy(code, str.data(), MAX_SIZE_EVENT - 1);
    }
    void setEventFromChar(char *c){
        strncpy(code, c, MAX_SIZE_EVENT - 1);
    }
} DataEvent_t;





#endif