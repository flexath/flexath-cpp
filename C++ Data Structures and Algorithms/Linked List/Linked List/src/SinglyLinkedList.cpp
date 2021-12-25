#include <iostream>
#include "SinglyLinkedList.h"

Node *createNode(int data){
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

Node *SinglyLinkedList::insertion(Node *head,int data,int nth){
    Node *temp = createNode(data);
    if(nth == 1){
        temp->next = head;
        head = temp;
    }
    else{
        Node *temp1 = head;
        for(int i = 0 ; i < nth-2 ; i++ ){
            temp1 = temp1->next;
        }
        temp->next = temp1->next;
        temp1->next = temp;
    }
    return head;
}

Node *SinglyLinkedList::deletion(Node *head,int nth){
    Node *temp = head;
    if(nth == 1){
        head = temp->next;
        delete temp;
    }
    else{
        for(int i = 0 ; i < nth-2 ; i++){
            temp = temp->next;
        }
        Node *temp1 = temp->next;
        temp->next = temp1->next;
        delete temp;
    }
    return head;
}

Node* SinglyLinkedList::reverseWithIteration(Node *head){
    Node *current,*previous,*next;
    previous = NULL;
    current = head;
    while(current != NULL){
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    head = previous;
    return head;
}

Node* SinglyLinkedList::reverseWithRecursion(Node *head){
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    if(head->next == NULL){
        return 0;
    }
    else{
        reverseWithRecursion(head->next);
        Node *temp1 = head->next;
        temp1->next = head;
        head->next = NULL;
    }
    return temp;
}

Node* SinglyLinkedList::print_forwardOrder_with_recursion(Node *head){
    if(head == NULL){
        return 0;
    }
    std::cout << " " << head->data;
    print_forwardOrder_with_recursion(head->next);
    return head;
}

Node* SinglyLinkedList::print_reverseOrder_with_recursion(Node* head){
    if(head == NULL){
        return 0;
    }
    print_reverseOrder_with_recursion(head->next);
    std::cout << " " << head->data;
    return head;
}

void SinglyLinkedList::traverse(Node *head){
    std::cout << "Singly Linked List is " ;
    while(head != NULL){
        std::cout << " " <<head->data ;
        head = head->next;
    }
    std::cout << std::endl;
}
