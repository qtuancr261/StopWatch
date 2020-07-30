#include <iostream>
#include "StopWatch.h"
using namespace std;

int main() {
    StopWatch benWat;
    benWat.restart();
    for (int var = 1; var < 100000; ++var) {
        cout << "B" << endl;
    }
    cout << " Elapsed time: " << benWat.elapsedMilliSec() << " sec" << endl;
    return 0;
}
