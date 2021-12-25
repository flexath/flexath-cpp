#include <iostream>
using namespace std;

class BaseOne {
public:
    BaseOne() {
        cout << "I am Base Two class " << endl;
    }
};

class BaseTwo {
public:
    BaseTwo() {
        cout << "I am Base Two class " << endl;
    }
};

class DerivedClass : public BaseOne, public BaseTwo {
public:
    DerivedClass() {
        cout << "I am Derived Class " << endl;
    }
};

int main()
{
    DerivedClass derive;
}