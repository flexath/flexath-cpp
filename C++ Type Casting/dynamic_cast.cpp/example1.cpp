// syntax      >>    const_cast<Type>(expression)

// dynamic_cast is used as run time to find out correct down-cast
// Note : It needs al least one virtual function in base class

#include <iostream>

// Note 1 : If the cast is successful , dynamic_cast returns a value of <Type>
// Note 2 : If the cast fails and <Type> is a pointer type , it returns a null pointer of that type
// Note 3 : If the cast fails and <Type> is a reference type , it throws an exception that matches a handler of type std::bad_cast

class Base{
    virtual void print(){
        std::cout << "Base class" << std::endl;
    }
};

class Derived1:public Base{
    void print(){
        std::cout << "Derived Class 1 " << std::endl;
    }
};

class Derived2:public Base{
    void print(){
        std::cout << "Derived Class 2 " << std::endl;
    }
};

int main()
{
    Derived1 deri1;
    //Derived2 *deri2 = dynamic_cast<Derived2*>(&deri1);        // Cast fails
    // Or
    Base *base  = dynamic_cast<Base*>(&deri1);                  //  Cast success

    Derived1 *deri11 = dynamic_cast<Derived1*>(base);
    if(deri11 == nullptr){
        std::cout << "Cast Fails : NULL" << std::endl;
    }
    else{
        std::cout << "Cast is successful : Not NULL" << std::endl;
    }
}
