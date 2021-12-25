// Use for all up casts , but never use for confused down cast
// up casts mean from derived class pointer to base class pointer
// down casts mean from base class pointer to derived class pointer


#include <iostream>

class Base_class{};
class Derived_class1:private Base_class{};
class Derived_class2:private Base_class{};

int main()
{
    Derived_class1 dr1;
    Derived_class2 dr2;

    // C-style casting
    Base_class* base1 = (Base_class*)&dr1;
    Base_class* base2 = (Base_class*)&dr2;

    // static_cast
    Derived_class1* dr3 = static_cast<Derived_class1*>(base1);      // compile time error
    Derived_class2* dr4 = static_cast<Derived_class2*>(base2);      // compile time error
}
