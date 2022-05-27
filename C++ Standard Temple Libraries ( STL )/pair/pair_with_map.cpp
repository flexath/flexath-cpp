#include <iostream>
#include <string>
#include <map>
#include <functional>

int main(){
    std::pair<int,int> obj(10,20);
    std::cout << obj.first << " " << obj.second << std::endl;

    std::pair<std::string,int> obj1 = std::make_pair("aung" , 100);
    std::cout << obj1.first << " " << obj1.second << std::endl;

    std::map<std::string,int> dict;
    dict.insert(obj1);

    for(auto& ele : dict){
        std::cout << ele.first << " " << ele.second ;
        std::cout << std::endl;
    }
}