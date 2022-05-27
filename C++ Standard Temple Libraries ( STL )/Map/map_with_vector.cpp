#include <iostream>
#include <map>
#include <string>
#include <functional>
#include <vector>

int main(){
    std::map<std::string,std::vector<int>,std::less<>> dict;
    dict["aung"].push_back(100);
    dict["thiha"].push_back(200);
    dict["aung"].push_back(300);
    for(auto& e : dict){
        std::cout << e.first ;
        for(auto& e1 : e.second){
            std::cout << " " << e1 ;
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
    
}