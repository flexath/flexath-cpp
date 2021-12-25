#include <iostream>

extern int ath ;
// 'ath' var is the same as 'ath' var of test_extern.cpp file because of extern keyword
// For not to be the same , you can use static keyword in test_extern.cpp file of that varible 'ath'

int main()
{
    std::cout << "val : " << ath << std::endl;
}
