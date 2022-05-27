#include <iostream>
#include <vector>

int main()
{
    std::vector<int> num = {1,3,5,7,9};

    printf("Element at nth index - %d\n" , num[3]);
    printf("Element at nth index - %d\n" , num.at(3));
    printf("Element at front - %d\n" , num.front());
    printf("Element at front - %d\n" , num.back());

    for(int i = 0 ; i < num.size() ; i++){
        std::cout << num.data()[i] << " " ;
    }
}
