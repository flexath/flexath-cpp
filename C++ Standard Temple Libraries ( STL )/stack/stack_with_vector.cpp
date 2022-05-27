#include <iostream>
#include <stack>
#include <vector>

std::vector<int> print(std::stack<int> &st){
    std::vector<int> vec;
    while(!st.empty()){
        // std::cout << st.top() << std::endl;
        vec.push_back(st.top());
        st.pop();
    }
    return vec;
}

int main(){
    std::stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    std::vector<int> vec;
    vec = print(st);
    for(auto i = vec.begin() ; i != vec.end() ; i++){
        std::cout << *i << std::endl;
    }
    std::cout << "Size : " << vec.size() << std::endl;
}