#include <iostream>
#include <string>


int main(){
    const int SIZE = 100 ;
    
    // if u want to change constant value , you can use following way
    int *ptr0 ;
    ptr0 = (int*)&SIZE;
    std::cout << *ptr0 << std::endl;

    // It you use following way,u can't modify its type,but can modify contents of variable
    int* const ptr = new int(50);
    *ptr = 70;
    std::cout << *ptr << std::endl;

     // It you use following way,u can't modify its contents,but can modify type of variable
    const int* ptr1 ;
    ptr1 = (int*)&SIZE;
    std::cout << *ptr1 << std::endl;
}