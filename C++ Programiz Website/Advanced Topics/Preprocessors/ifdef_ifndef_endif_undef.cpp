#include <iostream>
using namespace std;

#define pi 3.14159

int main() {
    cout << "Value of pi :" << pi << endl;

#undef pi
    cout << "Pi is initially undefined"  << endl;
    //cout << pi << endl;                   // this will rise error when you uncomment

#ifdef pi
    cout << "Pi is defined" << endl;
#endif

#ifndef pi
    cout << "Pi is not defined" << endl;
#endif

    return 0;
}