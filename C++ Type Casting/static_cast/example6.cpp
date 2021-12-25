// static_cast should be prefered when converting to void* or from void*


#include <iostream>


int main()
{
    int i = 10;

    // C-style casting
    void* a = (void*)&i;
    std::cout << "Address : " << a << std::endl;
    int* b = (int*)a;
    std::cout << "Address : " << b << std::endl;
    std::cout << "Value : " << *b << std::endl;

    // static_cast
    void* vPtr1 = static_cast<void*>(&i);
    std::cout << "Address : " << vPtr1 << std::endl;
    //std::cout << "Value : " << *vPtr1 << std::endl;          // this line show error because void returns nothing
    int* iPtr1 = static_cast<int*>(vPtr1);
    std::cout << "Address : " << iPtr1 << std::endl;
    std::cout << "Value : " << *iPtr1 << std::endl;
}
