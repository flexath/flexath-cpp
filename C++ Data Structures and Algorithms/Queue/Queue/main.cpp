#include <iostream>
#include <stdio.h>
#include "ArrayQueue.h"
#include "LinkedListQueue.h"

int main()
{
    LinkedListQueue queueLink;
    queueLink.enqueue(5);
    queueLink.enqueue(10);
    queueLink.enqueue(15);
    queueLink.enqueue(20);
    queueLink.print_linkedQueue();
    int remove_value = queueLink.dequeue();
    std::cout << "Remove value is " << remove_value << std::endl;
    queueLink.print_linkedQueue();
//    peek = queueArray.dequeue();
//    queueArray.print_queue();
}
