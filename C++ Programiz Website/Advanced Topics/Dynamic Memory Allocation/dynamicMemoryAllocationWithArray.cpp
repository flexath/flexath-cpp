#include <iostream>
using namespace std;

int main()
{
    int* ptr = new int[5];

    for (int i = 0; i <= 4; i++) {
        cin >> ptr[i];
    }

    for (int i = 0; i <= 4; i++) {
        cout << "Array " << i << " - " << ptr[i] << endl;
    }
    delete ptr;
}