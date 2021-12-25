#include <iostream>
#include <memory>

int main()
{

    std::unique_ptr<int> unPtr1 = std::make_unique<int>(25);
    std::cout << "For unique pointer 1 : " << *unPtr1 << std::endl;

    // Change unPtr1 ownership to unPtr2 with move() function
    std::unique_ptr<int> unPtr2 = move(unPtr1);
    std::cout << "For unique pointer 2 : " << *unPtr2 << std::endl;
    //std::cout << "unPtr1 after moving its ownership to unPtr2 : " << *unPtr1 << std::endl;
}
