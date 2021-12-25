#include <iostream>
using namespace std;

class BaseClass {
public:
    virtual void name() = 0;

    virtual int age(int a) {
        cout << "My age is " << a << endl;
        return a;
    }
};

class AungThiha : public BaseClass {
public:
    void name() {
        cout << "I am Aung Thiha" << endl;
    }
    
    int age(int a) {
        cout << "Aung Thiha's age is " << a << endl;
        return a;
    }
};

class KaungLay : public BaseClass {
public:
    void name() {
        cout << "I am Kaung Lay" << endl;
    }
    int age(int a) {
        cout << "Kaung Lay's age is " << a << endl;
        return a;
    }
};

int main()
{
    AungThiha ath1;
    KaungLay ath2;

    BaseClass *base1;
    BaseClass *base2;

    base1 = &ath1;
    base2 = &ath2;

    base1->name();
    base2->name();

    base1->age(21);
    base2->age(22);
}