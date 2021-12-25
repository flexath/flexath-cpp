#include <iostream>

struct Node{
    int data;
    Node *next;
    Node *prev;
};

void traverse(Node *head);
Node* insert_at_beginning(Node *head,int data);
void printReverseOrder(Node *head);

int main(){
    Node *head = NULL;
    head = insert_at_beginning(head,100);
    head = insert_at_beginning(head,200);
    head = insert_at_beginning(head,300);
    head = insert_at_beginning(head,400);
    traverse(head);
    printReverseOrder(head);
}

Node *createNewNode(int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

Node* insert_at_beginning(Node *head,int data){
    Node *temp = createNewNode(data);
    if(head == NULL){
        head = temp;
    }
    else{
        head->prev = temp;
        temp->next = head;
        head = temp;
    }
    return head;
}

void traverse(Node *head){
    std::cout << "Doubly Linked List is " ;
    while(head != NULL){
        std::cout << " " << head->data ;
        head = head->next;
    }
    std::cout << "\nSuccess" << std::endl;
}

void printReverseOrder(Node *head){
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    std::cout << "Printing reverse order - " ;
    while(temp != NULL){
        std::cout << " " << temp->data ;
        temp = temp->prev;
    }
}
