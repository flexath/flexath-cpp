#include <iostream>

void print(){
    static int x = 5;        // you can check whether there is static keyword or not
    static int y = 9;        // you can check whether there is static keyword or not
    std::cout << x << " , " << y << std::endl;
    x++;
    y++;
}

int main()
{
    print();
    print();
}
