#include <iostream>
#include <stdio.h>

struct Node{
    int data;
    Node *next;
};

Node *insert_at_nth_position(Node *head,int data,int nth);
Node *traverse(Node *head);
void print_forwardOrder_with_recursion(Node *head);
void print_reverseOrder_with_recursion(Node *head);

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
    print_forwardOrder_with_recursion(head);
    std::cout << std::endl;
    print_reverseOrder_with_recursion(head);
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


Node *traverse(Node *head){
    printf("Final Linked List is");
    while(head != NULL){
        printf(" %i",head->data);
        head = head->next;
    }
    printf("\nSuccess\n");
}

void print_forwardOrder_with_recursion(Node *head){
    if(head == NULL){
        return;
    }
    std::cout << " " << head->data;
    print_forwardOrder_with_recursion(head->next);
}

void print_reverseOrder_with_recursion(Node *head){
    if(head == NULL){
        return;
    }
    print_reverseOrder_with_recursion(head->next);
    std::cout << " " << head->data;
}
