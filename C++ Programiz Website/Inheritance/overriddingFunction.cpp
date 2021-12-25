#include <iostream>
using namespace std;

class BaseClass {
public:
    BaseClass() {
        cout << "It is base class " << endl;
    }
    void name() {
        cout << "I am parent class" << endl;
    }
};

class DerivedClass : public BaseClass {
public:
    DerivedClass() {
        cout << "It is derived class " << endl;
    }

    void name() {
        cout << "I am child class" << endl;
    }
};

int main()
{
    DerivedClass derived;
    derived.name();
    //derived.BaseClass::name();
}