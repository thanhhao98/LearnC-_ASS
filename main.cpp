#include <iostream>
#include "myStructLib.h"
#include "readFile.h"
#include "myMath.h"


using namespace std;

int main(int narg, char** argv) {
    
    DataInf_t db[MAX_LINE_FILE];
    DataEvent_t ev[MAX_LINE_FILE];

    int numData = readDataInf(argv[1],db);
    int numEvent = readEvent(argv[2],ev);

    cout << fixed << setprecision(12);

    for(int i=0;i<numEvent;i++){
        process(db,ev[i], numData);
    }


    cout << resetiosflags(ios::showbase) << setprecision(-1);

    return 0;
}