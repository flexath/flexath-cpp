#include <iostream>

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node* createNode(int data);
Node* insertion(Node* root , int data);
bool searching(Node* root,int data);

int main(){
    Node *root = NULL;
    root = insertion(root,50);
    root = insertion(root,75);
    root = insertion(root,25);
    root = insertion(root,20);
    root = insertion(root,30);
    root = insertion(root,10);
    root = insertion(root,40);
    root = insertion(root,80);
    root = insertion(root,5);
    int num;
    std::cin >> num;
    if(searching(root,num) ==  true) std::cout << "Found\n" ;
    else std::cout << "Not Found\n" ;
}

Node* createNode(int data){
    Node* newNode = new Node;
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insertion(Node* root , int data){
    if(root == NULL){
        root = createNode(data);
    }
    else if(data <= root->data){
        root->left = insertion(root->left , data);
    }
    else if(data > root->data){
        root->right = insertion(root->right , data);
    }
    return root;
}

bool searching(Node* root,int data){
    if(root == NULL) return false;
    else if(data == root->data){
        return true;
    }
    else if(data <= root->data){
        return searching(root->left,data);
    }
    else if(data > root->data){
        return searching(root->right,data);
    }

}
