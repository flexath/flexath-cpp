#include <iostream>
#include <stdio.h>
#include "SinglyLinkedList.h"
#include "DoublyLinkedList.h"

int main()
{
    DoubNode *head = NULL;
    SinglyLinkedList singly;
    DoublyLinkedList doubly;
//    head = singly.insertion(head,100,1);
//    head = singly.insertion(head,200,2);
//    head = singly.insertion(head,300,3);
//    singly.traverse(head);
//    std::cout<< "Linked List after deletion : ";
//    head = singly.deletion(head,2);
//    singly.traverse(head);
//    std::cout << "Reverse with iteration : ";
//    head = singly.reverseWithIteration(head);
//    singly.traverse(head);
//    std::cout << "Reverse with recursion : ";
//    head = singly.reverseWithRecursion(head);
//    singly.traverse(head);
//    std::cout << "Forward Order Printing with recursion - ";
//    head = singly.print_forwardOrder_with_recursion(head);
//    std::cout << std::endl;
//    std::cout << "Reverse Order Printing with recursion - ";
//    head = singly.print_reverseOrder_with_recursion(head);

    head = doubly.insert_at_beginning(head,100);
    head = doubly.insert_at_beginning(head,200);
    head = doubly.insert_at_beginning(head,300);
    doubly.traverse(head);
}







