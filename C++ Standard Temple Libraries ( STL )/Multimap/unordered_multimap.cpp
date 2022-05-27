#include <iostream>
#include <unordered_map>
#include <string>

int main(){
    std::unordered_multimap<int,std::string> umap;

    umap.insert(std::pair<int,std::string>(1,"aung"));
    umap.insert(std::make_pair(2,"hnin"));
    umap.insert(std::make_pair(2,"nandar"));
    umap.insert(std::make_pair(1,"thiha"));
    umap.insert(std::make_pair(3,"love"));
    for(auto &ele : umap){
        std::cout << ele.first << " - " << ele.second << " , " ;
    }
    std::cout << std::endl;
}