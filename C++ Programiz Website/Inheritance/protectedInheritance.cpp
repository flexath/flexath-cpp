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

class FirstDerivedClass : protected Person {
public:
    FirstDerivedClass() {
        cout << "FirstDerivedClass : Public variable from base class : " << pub << endl;
        cout << "FirstDerivedClass : Protected variable from base class : " << pro << endl;

        // Errors rise
        //cout << "FirstDerivedClass : Private variable from base class : " << pri << endl;
    }
};

class SecondDerivedClass : protected FirstDerivedClass {
public:
    SecondDerivedClass() {
        cout << "SecondDerivedClass : Public variable from base class : " << pub << endl;
        cout << "SecondDerivedClass : Protected variable from base class : " << pro << endl;

        // Errors rise
        //cout << "SecondDerivedClass : Private variable from base class : " << pri << endl;
    }
};





int main()
{
    FirstDerivedClass first;
    SecondDerivedClass second;
}