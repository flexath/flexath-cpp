#include <iostream>
using namespace std;

// Do comment or uncomment this line
#define num 100

int main() {

#ifdef num
    cout << "The macro num is defined" << endl;
#endif

#ifndef num
    cout << "The macro num is not defined" << endl;
#endif

    return 0;
}