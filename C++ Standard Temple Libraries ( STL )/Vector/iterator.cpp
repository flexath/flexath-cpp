#include <iostream>
#include <vector>

int main()
{
    std::vector<int> num = {1,3,5,7,9};
    for(auto i = num.begin() ; i != num.end() ; i++){
        printf("%i " , *i);
    }
    std::cout << std::endl;
    for(auto i = num.rbegin() ; i != num.rend() ; i++){
        printf("%i " , *i);
    }
    std::cout << std::endl;
    for(auto i = num.cbegin() ; i != num.cend() ; i++){
        printf("%i " , *i);
    }
    std::cout << std::endl;
    for(auto i = num.crbegin() ; i != num.crend() ; i++){
        printf("%i " , *i);
    }
}
