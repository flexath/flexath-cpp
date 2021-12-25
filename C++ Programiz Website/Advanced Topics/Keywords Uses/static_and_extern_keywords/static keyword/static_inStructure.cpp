#include <iostream>

// static variables have only one space allocated on memory

struct Entity{
    static int a,b;
    void print(){
        std::cout << "a : " << a << " , " << "b : " << b << std::endl;
    }
};

int Entity::a;
int Entity::b;

int main()
{
    Entity en1;
    en1.a = 10;
    en1.b = 20;

    Entity en2;
    en2.a = 30;
    en2.b = 40;
    en1.print();
    en2.print();
}
