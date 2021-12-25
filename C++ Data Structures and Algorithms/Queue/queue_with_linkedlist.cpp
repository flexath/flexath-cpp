#include <iostream>

struct Node{
    int data;
    Node *next;
};

Node *frontQ = NULL;
Node *rear = NULL;

void enqueue(int data);
void dequeue();
bool isEmpty();
void print_queue();

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
    print_queue();
    dequeue();
    print_queue();
    dequeue();
    print_queue();
    dequeue();
//    int peek = dequeue();
    //std::cout << std::endl << "peek is " << peek << std::endl;
    print_queue();
}

Node* createNode(int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void enqueue(int data){
    Node *temp = createNode(data);
    if(isEmpty() == true){
        frontQ = rear = temp;
        return;
    }
    else{
        rear->next = temp;
        rear = temp;
    }
}

void dequeue(){
    Node *temp = frontQ;
    if(isEmpty() ==  true){
        return;
    }
    else if(frontQ == rear){
        frontQ = rear = NULL;
        return;
    }
    else{
        frontQ = frontQ->next;
    }
    delete temp;
}

bool isEmpty(){
    if(frontQ == NULL & rear == NULL){
        return true;
    }
    else{
        return false;
    }
}

void print_queue(){
    Node *temp = frontQ;
    while(temp != NULL){
        std::cout << " " << temp->data;
        temp = temp->next;
    }
    std::cout << "\nSuccess" << std::endl;
}
