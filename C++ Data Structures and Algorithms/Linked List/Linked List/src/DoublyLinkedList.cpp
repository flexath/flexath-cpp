#include <iostream>
#include "DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList()
{

}

DoubNode* creatDoubNode(int data){
    DoubNode *newNode = new DoubNode;
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

DoubNode* DoublyLinkedList::insert_at_beginning(DoubNode *head,int data){
    DoubNode *temp = creatDoubNode(data);
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

void DoublyLinkedList::traverse(DoubNode *head){
    std::cout << "Doubly Linked List is ";
    while(head != NULL){
        std::cout << " " << head->data;
        head = head->next;
    }
    std::cout << "\nSuccess" << std::endl;
}
