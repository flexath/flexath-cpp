#include <iostream>
#include <stdio.h>

struct Node{
    int data;
    Node *next;
};

Node *insert_at_nth_position(Node *head,int data,int nth);
void traverse(Node *head);
Node* reverseWithRecursion(Node *head);

int main()
{
    Node *head = NULL;
    int sizes,value,nth;
    printf("Enter the sizes of linked list - ");
    scanf("%i",&sizes);
    for(int i = 0 ; i < sizes ; i++){
        printf("\nEnter the value of new node - ");
        scanf("%i",&value);
        printf("\nEnter the place of new node - ");
        scanf("%i",&nth);
        head = insert_at_nth_position(head,value,nth);
        traverse(head);
    }
    head = reverseWithRecursion(head);
    traverse(head);
}

 Node *insert_at_nth_position(Node *head,int data,int nth){
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
     return head;
 }

 void traverse(Node *head){
    std::cout << "Singly Linked List is " ;
    while(head != NULL){
        std::cout << " " <<head->data ;
        head = head->next;
    }
    std::cout << std::endl;
}

Node* reverseWithRecursion(Node *head){
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
