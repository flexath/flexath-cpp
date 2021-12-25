#include <iostream>

int frontQ , rear = -1;
#define MAX_SIZE 10
int datas[MAX_SIZE];

void enqueue(int data);
int dequeue();
bool isEmpty();
bool isFull();
void print_queue();
int peek();

int main(){
    enqueue(5);
    enqueue(10);
    enqueue(15);
    enqueue(20);
    enqueue(25);
    enqueue(30);
    enqueue(35);
    enqueue(40);
    enqueue(45);
    enqueue(50);
    int peek = dequeue();
    std::cout << std::endl << "peek is " << peek << std::endl;
    print_queue();
}

void enqueue(int data){
    if(isFull()){
        return;
    }
    else if(isEmpty()){
        frontQ = rear = 0 ;
    }
    else{
        rear = rear + 1 ;
    }
    datas[rear] = data;
    std::cout << datas[rear] << " " ;
}

int dequeue(){
    if(isEmpty()){
        return 0;
    }
    else if(frontQ == rear){
        frontQ = rear = -1;
        return 0;
    }
    else{
        frontQ = (frontQ + 1) % MAX_SIZE;
    }
    return datas[frontQ];
}


bool isEmpty(){
    if(frontQ == -1 && rear == -1){
        return true;
    }
    else{
        return false;
    }
}

bool isFull(){
    if(frontQ == 0 && rear == MAX_SIZE-1){
        return true;
    }
    else{
        return false;
    }
}

int peek(){
    return datas[frontQ];
}


void print_queue(){
    std::cout << "Array is - ";
    for(int i = frontQ ; i <= rear ; i++){
        std::cout << " " << datas[i] ;
    }
}
