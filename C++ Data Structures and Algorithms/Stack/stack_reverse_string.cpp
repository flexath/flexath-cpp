#include <iostream>
#include <cstring>
#include <stack>

void reverseString(char *name , int n);

int main(){
    char name[100];
    std::cin.get(name,100);
    std::cout << strlen(name) << std::endl;
    reverseString(name,strlen(name));
    std::cout << name << std::endl;
}

void reverseString(char *name , int n){
    std::stack<char> st;
    for(int i = 0 ; i < n ; i++){
        st.push(name[i]);
    }
    for(int i = 0 ; i < n ; i++){
        name[i] = st.top();
        st.pop();
    }
}
