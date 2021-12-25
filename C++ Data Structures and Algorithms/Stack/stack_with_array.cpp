#include <iostream>

#define SIZE 10
int num[SIZE];
int top = -1;

void push(int data);
int pop();
bool isEmpty();
int topValue();
void print_stack();

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    print_stack();
    int no = pop();
    print_stack();
    std::cout << "Pop value is " << no << std::endl ;
    no = pop();
    print_stack();
    std::cout << "Pop value is " << no << std::endl ;
    int top_value = topValue();
    std::cout << "Top value is " << top_value ;
}

void push(int data){
    if(isEmpty()){
        top = 0;
    }
//    else if(isFull() && top != 0){
//        top = ( top + 1 )
//    }
    else{
        top++;
    }
    num[top] = data;
}

int pop(){
    if(isEmpty()){
        return 0;
    }
    else{
        top--;
    }
    return num[top+1];
}

bool isEmpty(){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}

bool isFull(){
    if(top == SIZE-1){
        return true;
    }
    else{
        return false;
    }
}

int topValue(){
    return num[top];
}

void print_stack(){
    std::cout << "Your stack is " ;
    for(int i = 0 ; i <= top ; i++){
        std::cout << num[i] << " ";
    }
    std::cout << "\nSuccess" << std::endl;
}
