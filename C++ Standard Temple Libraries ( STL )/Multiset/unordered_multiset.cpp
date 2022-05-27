#include <iostream>
#include <unordered_set>

int main(){
    std::unordered_multiset<int> umset = {5,7,3,5,4,1,4,6,7,1,2};
    for(auto &ele : umset){
        std::cout << ele << " , " ;
    }
    std::cout << std::endl;
}