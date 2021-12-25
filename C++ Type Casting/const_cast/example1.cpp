// syntax      >>    const_cast<Type>(expression)

// const_cast can be used to change the const or volatile qualifiers of pointer or reference
// where Type must be a pointer , reference or a pointer to member Type

#include <iostream>

// When the actual referred object/variable is not constant

int main()
{
    // invalid code / runtime error , so it is big dangerous
    const int i = 10;
    const int *iPtr = &i;
    int *ptr = const_cast<int*>(iPtr);
    *ptr = 15;
    std::cout << i << std::endl;
    std::cout << *ptr << std::endl << std::endl;

    int i1 = 10;
    const int *iPtr1 = &i1;
    int *ptr1 = const_cast<int*>(iPtr1);
    *ptr1 = 15;
    std::cout << i1 << std::endl;
    std::cout << *ptr1 << std::endl;
}
