#ifndef LINKEDLISTQUEUE_H
#define LINKEDLISTQUEUE_H

struct Node{
    int data;
    Node *next;
};

class LinkedListQueue
{
    public:
        LinkedListQueue();
        void enqueue(int data);
        Node* createNode(int data);
        int dequeue();
        bool isEmpty();
        int peek();
        void print_linkedQueue();
    private:
        Node *frontQ ;
        Node *rear ;
};

#endif // LINKEDLISTQUEUE_H
