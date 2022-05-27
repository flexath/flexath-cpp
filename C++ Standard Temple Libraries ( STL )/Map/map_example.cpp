#include <iostream>
#include <map>
#include <string>
#include <functional>

int main(){
    std::map<std::string,int> dict;
    dict["aung"] = 100 ;
    dict["thiha"] = 200 ;
    for(auto& e : dict){
        std::cout << e.first << " - " << e.second ;
        std::cout << std::endl;
    }
    std::cout << std::endl;
    dict.insert(std::make_pair("hnin",1000));
    for(auto& e : dict){
        std::cout << e.first << " - " << e.second ;
        std::cout << std::endl;
    }
}