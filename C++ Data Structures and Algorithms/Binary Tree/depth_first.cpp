#include <iostream>
#include <queue>

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node* createNode(int data);
Node* insertion(Node* root , int data);
void preOrderTraversal(Node *root);
void inOrderTraversal(Node *root);
void postOrderTraversal(Node *root);

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
    std::cout << "Preorder Traversal - " ;
    preOrderTraversal(root);
    std::cout << "\nInorder Traversal - " ;
    inOrderTraversal(root);
    std::cout << "\nPostorder Traversal - " ;
    postOrderTraversal(root);
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

void preOrderTraversal(Node *root){
    if(root == NULL) return;
    std::cout << " " << root->data;
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node *root){
    if(root == NULL) return;
    inOrderTraversal(root->left);
    std::cout << " " << root->data;
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node *root){
    if(root == NULL) return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    std::cout << " " << root->data;
}
