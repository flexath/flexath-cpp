#include <iostream>

int ath = 99;
// 'ath' var is not the same as 'ath' var of test_static.cpp file
// because 'ath' var of test_static.cpp uses static keyword

int main()
{
    std::cout << "val : " << ath << std::endl;
}
