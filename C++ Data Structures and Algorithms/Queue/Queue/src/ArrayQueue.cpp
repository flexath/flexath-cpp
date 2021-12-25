#include "ArrayQueue.h"
#include <iostream>

ArrayQueue::ArrayQueue()
{
    frontQ = rear = -1;
}

void ArrayQueue::enqueue(int data){
    if(isFull() == true){
        return;
    }
    else if(isEmpty() == true){
        frontQ = rear = 0 ;
    }
    else{
        rear = (rear + 1) % SIZE ;
    }
    arr[rear] = data;
}

int ArrayQueue::dequeue(){
    if(isEmpty()){
        return 0;
    }
    else if(frontQ == rear){
        frontQ = rear = -1;
    }
    else{
        frontQ = frontQ + 1;
    }
    return arr[frontQ];
}

bool ArrayQueue::isEmpty(){
    if(frontQ == -1 && rear == -1){
        return true;
    }
    else{
        return false;
    }
}

bool ArrayQueue::isFull(){
    if(frontQ == 0 && rear == SIZE-1){
        return true;
    }
    else{
        return false;
    }
}

void ArrayQueue::print_queue(){
    std::cout << "Your array is " ;
    for(int i = frontQ ; i <= rear ; i++){
        //std::cout << "\nFront - " << frontQ << "  , Rear - " << rear << std::endl;
        std::cout << arr[i] << " , " ;
    }
    std::cout << "\nSuccess!" << std::endl;
}
