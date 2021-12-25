// It performs implicit conversion between types
// C-style casting is hard to find code , but you can search static_cast keyword.

#include <iostream>

int main()
{
    // C-style casting
    float x = 3.5;
    int y = x ;
    std::cout << "y : " << y << std::endl;

    // static_cast
    float a = 5.5;
    int b = static_cast<int>(a);
    std::cout << "b : " << b << std::endl;
}
