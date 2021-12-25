#include <iostream>
#include <vector>

int main()
{
    std::vector<int> num = {1,3,5,7,9};

    printf("----------Before adding---------\n");
    printf("Size of vector - %d\n" , num.size());
    printf("Maximum size of vector - %d\n" , num.max_size());
    printf("Capacity of vector - %d\n" , num.capacity());

    printf("\n");

    printf("----------After adding---------\n");
    num.push_back(11);
    printf("Size of vector - %d\n" , num.size());
    printf("Maximum size of vector - %d\n" , num.max_size());
    printf("Capacity of vector - %d\n" , num.capacity());

    printf("Container is empty or not (1 for empty / 0 for not empty - %d\n\n" , num.empty());

    printf("----------After resizing---------\n");
    num.resize(8);
    printf("Size of vector - %d\n" , num.size());
    printf("Maximum size of vector - %d\n" , num.max_size());
    printf("Capacity of vector - %d\n" , num.capacity());
    printf("Index at 6 - %i\n",num[6]);
    printf("Index at 7 - %i\n",num[7]);

    printf("----------After shrinking---------\n");
    num.shrink_to_fit();
    printf("Size of vector - %d\n" , num.size());
    printf("Maximum size of vector - %d\n" , num.max_size());
    printf("Capacity of vector - %d\n" , num.capacity());

    printf("----------After reserving---------\n");
    num.reserve(100);
    printf("Size of vector - %d\n" , num.size());
    printf("Maximum size of vector - %d\n" , num.max_size());
    printf("Capacity of vector - %d\n" , num.capacity());
}
