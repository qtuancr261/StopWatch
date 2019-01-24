#include "StopWatch.h"
#include <iostream>
using namespace std;

int main()
{
    StopWatch benWat;
    benWat.B_Restart();
    for (int var = 1; var < 100000; ++var) {
        cout << "B" << endl;
    }
    cout << " Elapsed time: " << benWat.ElapsedMs() << " sec" << endl;
    return 0;
}
