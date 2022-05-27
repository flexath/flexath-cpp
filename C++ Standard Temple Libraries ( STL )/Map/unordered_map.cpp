#include <iostream>
#include <unordered_map>
#include <string>

int main(){
    std::unordered_map<int,std::string> umap;

    umap.insert(std::pair<int,std::string>(1,"aung"));
    umap.insert(std::make_pair(2,"thiha"));
    //umap.insert(std::make_pair(2,"hnin"));
    umap[3] = "nandar" ;
    //umap[3] = "thiha" ;       // this line overwrites above line
    for(auto &ele : umap){
        std::cout << ele.first << " - " << ele.second << " , " ;
    }
    std::cout << std::endl;
}