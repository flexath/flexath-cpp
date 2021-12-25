#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

struct Node{
        int data;
        Node *next;
};

class SinglyLinkedList
{
    public:
        Node* insertion(Node *head,int data,int nth);
        Node* deletion(Node *head,int nth);
        void traverse(Node *head);
        Node* reverseWithIteration(Node *head);
        Node* reverseWithRecursion(Node *head);
        Node* print_forwardOrder_with_recursion(Node *head);
        Node* print_reverseOrder_with_recursion(Node *head);
};

#endif
