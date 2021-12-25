// auto keyword is used for type deduction.

#include <iostream>

int main()
{
    auto x = 10;
    auto y = 5.5;
    auto z = x + y;
    std::cout << z << std::endl;

    std::cout << "Data type of x - " << typeid(x).name() << std::endl;
    std::cout << "Data type of y - " << typeid(y).name() << std::endl;
}
