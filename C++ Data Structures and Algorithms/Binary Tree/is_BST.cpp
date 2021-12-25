#include <iostream>
#include <queue>

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node* createNode(int data);
Node* insertion(Node* root , int data);
bool checkBinaryTree(Node *root , int min_value , int max_value);
bool isBinaryTree(Node *root);

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
    root = insertion(root,3);
    bool bst = isBinaryTree(root);
    bst = (bst==true) ? true:false;
    std::cout << "The answer is " << bst << std::endl;
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

bool checkBinaryTree(Node *root , int min_value , int max_value){
    if(root == NULL) return true;
    else if(root->data <= min_value || root->data > max_value) return false;
    return checkBinaryTree(root->left,min_value,root->data) && checkBinaryTree(root->right,root->data,max_value);
}

bool isBinaryTree(Node *root){
    return checkBinaryTree(root,INT_MIN,INT_MAX);
}
