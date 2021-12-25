#include <iostream>
using namespace std;

#define a 5
#define b 4

#define ADD(a,b) ((a==b) ? b:a)

int main() {
    cout << "The result is :" << ADD(a,b) << endl;
    return 0;
}
