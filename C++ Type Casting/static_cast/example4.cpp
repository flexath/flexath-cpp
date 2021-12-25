// static_cast avoid casting from derived class to base class pointer

#include <iostream>

class A{};
class B:private A{};

int main()
{
    // C-style casting
    B b;
    A* a = (A*)&b;              // allowed at compile time

    // static_cast
    A* c = static_cast<A*>(&b);    // compile time error
}
