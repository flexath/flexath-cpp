#include <iostream>

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node* createNode(int data);
Node* insertion(Node* root , int data);
int findMin(Node *root);
int findMax(Node *root);

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
    int min_value = findMin(root);
    std::cout << "Min value in the tree is " << min_value << std::endl;
    int max_value = findMax(root);
    std::cout << "Max value in the tree is " << max_value << std::endl;
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

int findMin(Node *root){
    if(root == NULL) return 0;
    else if(root->left == NULL){
        return root->data;
    }
    return findMin(root->left);
}

int findMax(Node *root){
    if(root == NULL) return 0;
    else if(root->right == NULL){
        return root->data;
    }
    return findMax(root->right);
}
