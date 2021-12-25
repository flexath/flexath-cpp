#include <iostream>
using namespace std;

#define pi 3.14159

int main() {
    cout << "Value of pi :" << pi << endl;

#undef
    cout << "Value of pi :" << pi << endl;

    cout << "aaa" << pi ;

    return 0;
}