#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday = 10, Thursday, Friday = 1000, Saturday };

int main()
{
    int a = Wednesday;
    cout << "Day " << a << endl;
    
    week today;
    today = Monday;
    cout << "Day " << today;
    return 0;
}