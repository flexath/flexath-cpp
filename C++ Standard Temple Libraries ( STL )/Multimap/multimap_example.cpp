#include <iostream>
#include <map>
#include <string>
#include <functional>

int main(){
    std::multimap<std::string,int> dict;
    dict.insert(std::pair<std::string,int>("aung",100));
    dict.insert(std::pair<std::string,int>("hnin",200));
    dict.insert(std::pair<std::string,int>("aung",500));
    dict.insert(std::pair<std::string,int>("aung",50));
    dict.insert(std::pair<std::string,int>("hnin",700));
    dict.insert(std::pair<std::string,int>("hnin",10));
    for(auto& e : dict){
        std::cout << e.first << " - " << e.second ;
        std::cout << std::endl;
    }
    std::pair<std::multimap<std::string, int>::iterator, std::multimap<std::string, int>::iterator> range = dict.equal_range("aung");
    for(auto i = range.first ; i != range.second ; ++i){
        std::cout << i->first << " - " << i->second << std::endl;
    }
}