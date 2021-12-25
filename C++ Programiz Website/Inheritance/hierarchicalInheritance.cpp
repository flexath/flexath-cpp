#include <iostream>
using namespace std;

class Person
{
private:
    int pri = 20;
public:
    int pub = 10;
protected:
    int pro = 0;
};

class FirstDerivedClass : public Person {
public:
    FirstDerivedClass() {
        cout << " It is first derived class " << endl;
    }
};

class SecondDerivedClass : public Person {
public:
    SecondDerivedClass() {
        cout << " It is second derived class " << endl;
    }
};

int main()
{
    FirstDerivedClass first;
    SecondDerivedClass second;
}