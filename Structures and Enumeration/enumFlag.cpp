#include <iostream>
using namespace std;

enum designFlags {ITALICS = 1 , BOLD = 2 , UNDERLINE = 4 } button;

int main()
{
    int myDesign = BOLD | UNDERLINE;

    cout << myDesign;

    return 0;
}