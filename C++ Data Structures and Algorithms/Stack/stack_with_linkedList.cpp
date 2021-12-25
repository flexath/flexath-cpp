#include <iostream>

struct Node{
    int data;
    Node *next;
};

Node *top = NULL;

void push(int data);
Node* pop();
bool isEmpty();
Node* topValue();
void print_stack();

int main(){
    push(10);print_stack();
    push(20);print_stack();
    push(30);print_stack();
    push(40);print_stack();
    push(50);print_stack();
    Node *pop_value = pop();
    print_stack();
    std::cout << "Pop value is " << pop_value->data << std::endl ;
    Node* top_value = topValue();
    std::cout << "Top value is " << top_value->data ;
}

Node *createNode(int data){
    Node *newNode  = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void push(int data){
    Node *temp = createNode(data);
    if(isEmpty()){
        top = temp;
    }
    else{
        temp->next = top;
        top = temp;
    }
}

Node* pop(){
    Node *temp = top;
    if(isEmpty()){
        return 0;
    }
    else{
        top = top->next;
        delete temp;
    }
    return temp;
}

bool isEmpty(){
    if(top == NULL){
        return true;
    }
    else{
        return false;
    }
}

Node* topValue(){
    return top;
}

void print_stack(){
    Node *temp = top;
    std::cout << "Your stack is " ;
    while(temp != NULL){
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << "\nSuccess" << std::endl;
}
