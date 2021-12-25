#include <iostream>
#include <cstring>
#include <stack>
#include <string>

bool checking(bool check);
bool pairing(char open,char close);
bool checking_parentheses(std::string text);

int main(){
    std::string text;
    std::cin >> text;
    bool balance = checking_parentheses(text);
    bool check2 = checking(balance);
    std::cout << "1 for Balance & 0 for Unbalance" << std::endl;
    std::cout << "Answer is " << check2 << std::endl;
}

bool checking(bool check){
    return check ? true:false;
}

bool pairing(char open,char close){
    if(open == '(' && close == ')') return true;
    else if(open == '[' && close == ']') return true;
    else if(open == '{' && close == '}') return true;
    return false;
}

bool checking_parentheses(std::string text){
    std::stack<char> st;
    for(int i = 0 ; i < text.length() ; i++){
        if(text[i] == '(' || text[i] == '[' || text[i] == '{'){
            st.push(text[i]);
           }
        else if(text[i] == ')' || text[i] == ']' || text[i] == '}'){
            if(st.empty() || pairing(st.top(),text[i]) == false ){
                return false;
            }
            else{
                st.pop();
            }
        }
    }
    return st.empty() ? true:false;
}
