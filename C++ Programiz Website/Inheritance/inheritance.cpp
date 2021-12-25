#include <iostream>
using namespace std;

class Person
{
private:

public:
    string name;
    int appearance[3];
    int age;
    float height;

    void namer(string a) {
        name = a;
        cout << "Your name is " << name << endl;
    }

    int ager(int b) {
        age = b;
        cout << "Your age is " << age << endl;
        return age;
    }

    float heighter(float c) {
        height = c;
        cout << "Your height is " << height << endl;
        return height;
    }
    
};

class AungThiha : public Person {
public:
    string job;
    void programmer(string d) {
        job = d;
        cout << "Yes, I am  " << job << endl;
    }
};

class LaminKoKo : public Person {
public:
    string job;
    void electrical_engineer(string d) {
        job = d;
        cout << "Yes, I am  " << job << endl;
    }
};

int main()
{
    AungThiha ath;
    LaminKoKo lamin;

    ath.namer("Aung Thiha");
    ath.ager(21);
    ath.heighter(5.4);
    ath.programmer("Robotic Engineer \n");

    cout << endl;

    lamin.namer("Lamin Ko Ko");
    lamin.ager(20);
    lamin.heighter(5.3);
    lamin.electrical_engineer("Electrical Engineer");

}