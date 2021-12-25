#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

struct DoubNode{
    int data;
    DoubNode *next;
    DoubNode *prev;
};

class DoublyLinkedList
{
    public:
        DoublyLinkedList();
        DoubNode* createDoubNode(int data);
        DoubNode* insert_at_beginning(DoubNode *head,int data);
        void traverse(DoubNode *head);

};

#endif
