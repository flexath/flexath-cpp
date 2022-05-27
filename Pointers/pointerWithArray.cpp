#include <iostream>
using namespace std;


int main()
{
    int num[5];
    
    for (int i = 0; i < 5; i++) {
        cout << &num[i] << endl;
    }

    int* point;
    point = num;

    for (int ii = 0; ii < 5; ii++) {
        cout << endl;
        cout << point+ii ;
    }
    return 0;
}