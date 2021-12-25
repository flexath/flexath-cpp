#include <iostream>
using namespace std;

void numberByReference(int *a);
void numberByValue(int b);

int main()
{
    int a = 50;
    int b = 70;
    
    numberByReference(&a);
    numberByValue(b);

    cout << "By Reference : " <<  a << endl;
    cout << "By value : " << b << endl;


    return 0;
}

void numberByReference(int* a) {
    *a = 100;
}

void numberByValue(int b) {
    b = 200;
}