#include <iostream>
using namespace std;


int main()
{
    int num1 = 5;
    float num2 = 7.3;

    cout << "The address is " << &num1 << endl;
    cout << "The address is " << &num2 << endl;

    int *p1;
    float *p2;

    p1 = &num1;
    p2 = &num2;

    cout << "The deference operator(*) gives the value of address(num1) : " << *p1 << endl;
    cout << "The deference operator(*) gives the value of address(num1) : " << *p2 << endl;
    
    return 0;
}