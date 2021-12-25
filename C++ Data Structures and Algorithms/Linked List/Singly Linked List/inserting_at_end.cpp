#include <iostream>
#include <stdio.h>

struct Node{
    int data;
    Node *next;
};

void insert_at_end(int data);
void traverse();

Node *head;
int main()
{
    head = NULL;
    int sizes,value,nth;
    printf("Enter the sizes of linked list - ");
    scanf("%i",&sizes);
    for(int i = 0 ; i < sizes ; i++){
        printf("\nEnter the value of new node - ");
        scanf("%i",&value);
        insert_at_end(value);
        traverse();
    }
}

void insert_at_end(int data){
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    if(head == NULL){
        temp->next = head;
        head = temp;
    }
    else{
        Node *temp1 = head;
        while(temp1->next != NULL){
            temp1 = temp1->next;
        }
        temp->next = NULL;
        temp1->next = temp;
    }
}

void traverse(){
    Node *temp = head;
    printf("Final Linked List is");
    while(temp != NULL){
        printf(" %i",temp->data);
        temp = temp->next;
    }
    printf("\nSuccess\n");
}

// Node *traverse(Node *head){
//     printf("Final Linked List is");
//     while(head != NULL){
//         printf(" %i",head->data);
//         head = head->next;
//     }
//     printf("\nSuccess\n");
// }
