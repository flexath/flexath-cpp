 // https://www.youtube.com/watch?v=_8-ht2AKyH4

#include <iostream>
using namespace std;

int main()
{
    double* ptr = NULL;
    ptr = new double;

    // ptr pointer of stack stores value 30 into address of double in heap
    *ptr = 30;

    cout << "Value is : " << *ptr << endl;
    delete val;
}