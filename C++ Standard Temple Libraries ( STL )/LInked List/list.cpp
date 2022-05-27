#include <iostream>
#include <list>
#include <iterator>

int main(){
    std::list<int> doub = {5,3,6,9,1,2};
    //doub.insert(doub.begin(),10);
    std::__cxx11::list<int>::iterator it = doub.begin();
    std::advance(it,3);               // this function point to the third element from (it)
    //std::cout << *it << std::endl;
    doub.insert(it,7);
    for(auto & ele : doub){
        std::cout << ele << std::endl;
    }
}