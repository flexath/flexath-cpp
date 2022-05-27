#include <iostream>
#include <unordered_set>

int main(){
    std::unordered_set<int> uset = {5,7,3,5,4,1,4,6,7,1,2};
    for(auto &ele : uset){
        std::cout << ele << " , " ;
    }
    std::cout << std::endl;
}