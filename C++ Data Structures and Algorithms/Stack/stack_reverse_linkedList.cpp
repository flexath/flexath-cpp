#include <iostream>
#include <cstring>
#include <stack>

struct Node{
    int data;
    Node *next;
};

Node *top = NULL;

void reverseLinkedList();
Node *createNode(int data);
void print_linkedlist();

int main(){
    Node *node1 = createNode(10);
    Node *node2 = createNode(20);
    Node *node3 = createNode(30);
    Node *node4 = createNode(40);
    top = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;
    print_linkedlist();
    reverseLinkedList();
    print_linkedlist();
}

Node *createNode(int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void reverseLinkedList(){
    std::stack<Node*> st;
    Node *temp = top;
    while(temp != NULL){
        st.push(temp);
        temp = temp->next;
    }
    temp = st.top();
    top = temp;
    st.pop();
    while(!st.empty()){
        temp->next = st.top();
        st.pop();
        temp = temp->next;
    }
    temp->next = NULL;
}

void print_linkedlist(){
    Node *temp = top;
    while(temp != NULL){
        std::cout << temp->data << " " ;
        temp = temp->next;
    }
    std::cout << "\nSuccess!" << std::endl;
}
