#include <iostream>
#include "readFile.h"


using namespace std;

int main(int narg, char** argv) {
    
    // Define of 2 struct in "mystructLib.h"

    DataInf_t db[MAX_LINE_FILE];
    DataEvent_t ev[MAX_LINE_FILE];

    // Define of 2 function in "readFile.h"
    // Implement of 2 function in "process.cpp"
    int numData = readDataInf(argv[1],db);
    int numEvent = readEvent(argv[2],ev);

    cout << fixed << setprecision(12);

    for(int i=0;i<numEvent;i++){
        // Define of this function in "readFile.h"
        // Implement of this function in "process.cpp"
        process(db,ev[i], numData);
    }


    cout << resetiosflags(ios::showbase) << setprecision(-1);

    return 0;
}