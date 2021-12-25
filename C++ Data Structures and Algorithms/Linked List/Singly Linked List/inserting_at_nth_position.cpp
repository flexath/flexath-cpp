#include <iostream>
#include <stdio.h>

struct Node{
    int data;
    Node *next;
};

void insert_at_nth_position(int data,int nth);
// Node *insert_at_nth_position(Node *head,int data,int nth)
void traverse();
//Node *traverse(Node *head)

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
        printf("\nEnter the place of new node - ");
        scanf("%i",&nth);
        insert_at_nth_position(value,nth);
        traverse();
    }
}

void insert_at_nth_position(int data,int nth){
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    if(nth == 1){
        temp->next = head;
        head = temp;
    }
    else{
        Node *temp1 = head;
        for(int i = 0 ; i < nth-2 ; i++){
            temp1 = temp1->next;
        }
        temp->next = temp1->next;
        temp1->next = temp;
    }
}

// Node *insert_at_nth_position(Node *head,int data,int nth){
//     Node *temp = new Node;
//     temp->data = data;
//     temp->next = NULL;
//     if(nth == 1){
//         temp->next = head;
//         head = temp;
//     }
//     else{
//         Node *temp1 = head;
//         for(int i = 0 ; i < nth-2 ; i++){
//             temp1 = temp1->next;
//         }
//         temp->next = temp1->next;
//         temp1->next = temp;
//     }
//     return head;
// }

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
