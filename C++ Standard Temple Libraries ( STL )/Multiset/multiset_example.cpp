#include <iostream>
#include <string>
#include <memory>
#include <set>


int main(){
    
    std::multiset<int> obj = {5,1,3,10,7,1,10,3,7,2};
    for(auto&o : obj){
        std::cout << o  << std::endl;
    }
}