// static_cast doesn't allow casting from char* to int*

#include <iostream>

int main()
{
    // C-style casting
    char a = 'a';
    char *cPtr = &a;
    int* iPtr = (int*)&cPtr;            // pass to compile time , fail at run time ( so it is dangerous )
    //*iPtr = 19;
    std::cout << *iPtr ;

    // static_cast
    int *ptr = static_cast<int*>(&cPtr);      // compile time error
}
