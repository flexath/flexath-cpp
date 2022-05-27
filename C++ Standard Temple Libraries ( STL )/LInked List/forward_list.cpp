#include <iostream>
#include <forward_list>

// std::ostream& operator << (std::ostream& stream,std::forward_list<int>::iterator ite){
//     stream << ite ;
//     return stream;
// }
std::forward_list<int>::iterator i;
int main(){
    std::forward_list<int> ll = {4,7,1,3,9,0};
    std::forward_list<int> ll2 = {10};
    
    for(i = ll.begin() ; i != ll.end() ; i++){
        std::cout << *i << std::endl;
        
    }
    std::cout << "end : " << *i << std::endl;
}