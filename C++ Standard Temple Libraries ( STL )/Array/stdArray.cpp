#include <iostream>
#include <array>

int main()
{
    std::array<int,15> num = {1,2,3,4,5,6,7,8,9,10};

    for(int i = 0 ; i < 15 ; i++){
        printf(" %i" , num.at(i));
    }

    printf("\nArray at index %i is %i\n" , 7 , num.at(7));
    printf("Array at index %i is %i\n" , 5 , num[5]);
    printf("Value at front is %i\n" , num.front());
    printf("Value at back is %i\n" , num.back());
    // printf("Size of array is %i\n" , num.size());
    // printf("Maximum Size of array is %i\n" , num.max_size());
    printf("Array is empty or not (1 for empty & 0 for not empty) -  %i\n" , num.empty());
    num.fill(99);    // all elements are replaced with 99
    for(int i = 0 ; i < 15 ; i++){
        printf(" %i" , num.at(i));
    }
    printf("\nArray at index %i is %i\n" , 13 , num.at(13));

    std::array<int,15> num2 = {11,12,13,14,15,16,17,18,19,20};
    num2.swap(num);
    
    std::cout << "Array is :";
    for(int i = 0 ; i < 15 ; i++){
        printf(" %i" , num.at(i));
    }
    std::cout << std::endl;
    std::cout << "Array is :";
    for(int i = 0 ; i < 15 ; i++){
        printf(" %i" , num2.at(i));
    }
}