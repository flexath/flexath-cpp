#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H
#include <iostream>

#define SIZE 10
class ArrayQueue
{
    public:
        ArrayQueue();
        void enqueue(int data);
        int dequeue();
        bool isEmpty();
        bool isFull();
        void print_queue();

    private:
        int arr[SIZE];
        int frontQ , rear;
};

#endif
