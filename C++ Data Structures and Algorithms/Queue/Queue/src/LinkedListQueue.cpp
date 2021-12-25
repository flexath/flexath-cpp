#include "LinkedListQueue.h"
#include <iostream>
#include <stdio.h>

LinkedListQueue::LinkedListQueue()
{
    frontQ = NULL;
    rear = NULL;
}

Node* LinkedListQueue::createNode(int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void LinkedListQueue::enqueue(int data){
    Node *temp = createNode(data);
    if(isEmpty()){
        frontQ = rear = temp;
    }
    else{
        rear->next = temp;
        rear = temp;
    }
}

int LinkedListQueue::dequeue(){
    Node *temp = frontQ;
    if(isEmpty()){
        return 0;
    }
    else if(frontQ == rear){
        frontQ = rear = NULL;
    }
    else{
        frontQ = frontQ->next;
    }
    delete temp;
    return temp->data;
}

bool LinkedListQueue::isEmpty(){
    if(frontQ == NULL && rear == NULL){
        return true;
    }
    else{
        return false;
    }
}

int LinkedListQueue::peek(){
    return frontQ->data;
}

void LinkedListQueue::print_linkedQueue(){
    Node *temp = frontQ;
    std::cout << "Your linked list is " ;
    while(temp != NULL){
        std::cout << temp->data << " " ;
        temp = temp->next;
    }
    std::cout << "\nSuccess" << std::endl;
}
