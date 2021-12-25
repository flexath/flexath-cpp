#include <iostream>
using namespace std;

#define num 2

int main() {

#if num==1
    cout << "It is in the if directive" << endl;
#elif num==2
    cout << "It is in the elif directive" << endl;
#else
    cout << "It is in the else directive" << endl;
#endif
    cout << "Program ends !" << endl;

    return 0;
}