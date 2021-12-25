#include <iostream>

struct Node{
    int data;
    Node *next;
    Node *prev;
};

void traverse(Node *head);
Node* insertAtAnywhere(Node *head , int data , int index);
void printReverseOrder(Node *head);

int main(){
    Node *head = NULL;
    head = insertAtAnywhere(head,11,0);
    head = insertAtAnywhere(head,22,1);
    head = insertAtAnywhere(head,33,2);
    head = insertAtAnywhere(head,44,3);
    head = insertAtAnywhere(head,55,4);
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

Node* insertAtAnywhere(Node *head , int data , int index){
    Node *temp = createNewNode(data);
    if(head == NULL){
        head = temp;
    }
    else if(index == 0){
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    else{
        Node *temp1 = head;
        for(int i = 0 ; i < index-1 ; i++){
            temp1 = temp1->next;
        }
        //temp1->next->prev = temp;
        temp->prev = temp1;
        temp->next = temp1->next;
        temp1->next = temp;
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

void printReverseOrder(Node* head){
    Node *temp = head;
    while(temp->next != NULL){
       temp = temp->next;
    }
    std::cout << "Your Doubly Linked List is - " ;
    while(temp != NULL){
        std::cout << temp->data << " " ;
        temp = temp->prev;
    }
    std::cout << "\nSuccess!" << std::endl;
}
