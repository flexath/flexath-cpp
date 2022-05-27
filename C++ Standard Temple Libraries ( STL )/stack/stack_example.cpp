#include <iostream>
#include <stack>

void print(std::stack<int> st){
    while(!st.empty()){
        std::cout << st.top() << std::endl;
        st.pop();
    }
}

int main(){
    std::stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
}