#include <iostream>

// When we need to call some 3rd party library where it is taking varible/object as non-const but not changing that

void thirdPartyFunction(int *ptr){
    int k = 10;
    std::cout << k + *ptr;
}

int main()
{
    // invalid code / runtime error , so it is big dangerous
    const int i = 10;
    const int *iPtr = &i;
    thirdPartyFunction(const_cast<int*>(iPtr));
}
