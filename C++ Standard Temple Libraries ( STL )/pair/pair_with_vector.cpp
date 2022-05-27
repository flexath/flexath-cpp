#include <iostream>
#include <string>
#include <map>
#include <functional>
#include <vector>

int main(){
    std::pair<std::string,int> obj1 = std::make_pair("aung" , 100);

    std::vector<std::pair<std::string,int>> vec;
    vec.push_back(obj1);

    for(auto& ele : vec){
        std::cout << ele.first << " " << ele.second << std::endl;
        std::cout << std::endl;
    }
}