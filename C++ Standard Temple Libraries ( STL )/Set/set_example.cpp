#include <iostream>
#include <string>
#include <memory>
#include <set>

int main(){
    
    std::set<int> obj = {5,1,3,10,7};
    for(auto&o : obj){
        std::cout << o  << std::endl;
    }
    auto ser = obj.find(3);
    if(ser !=  obj.end()){
        std::cout << "Found ! " << std::endl;
    }
    else{
        std::cout << "Not Found !" << std::endl;
    }
}