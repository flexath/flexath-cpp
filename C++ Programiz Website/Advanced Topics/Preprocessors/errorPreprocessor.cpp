#include <iostream>
using namespace std;

// do comment or uncomment this line if u want to see something's different
//#define pi 3.14159

int main() {
    cout << "Value of pi :" << pi << endl;

#ifdef pi
    cout << "Pi is defined" << endl;
#endif

#ifndef pi
#error Pi is Aung Thiha
#endif

    cout << "Program ends !" << endl;
    return 0;
}