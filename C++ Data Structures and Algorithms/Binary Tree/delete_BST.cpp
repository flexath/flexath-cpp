#include <iostream>
#include <queue>

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node* createNode(int data);
Node* insertion(Node* root , int data);
Node* deletion(Node* root,int data);
Node *findMin(Node *root);
void inOrderTraversal(Node *root);

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
    root = deletion(root,10);
    inOrderTraversal(root);
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

Node* findMin(Node *root){
    if(root->left == NULL) return root;
    return findMin(root->left);
}

Node* deletion(Node *root , int data){
    if(root == NULL) return root;
    else if(data < root->data) root->left = deletion(root->left,data);
    else if(data > root->data) root->right = deletion(root->right,data);
    else{
        //root has no child
        if(root->left == NULL && root->right == NULL){
            delete root;
            root = NULL;
        }
        //root has one right child
        else if(root->left == NULL){
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        //root has one right child
        else if(root->right == NULL){
            Node *temp = root;
            root = root->left;
            delete temp;
        }
        else{
            Node *temp = findMin(root->right);
            root->data = temp->data;
            root->right = deletion(root->right,temp->data);
        }
    }
    return root;
}

void inOrderTraversal(Node *root){
    if(root == NULL) return;
    inOrderTraversal(root->left);
    std::cout << " " << root->data;
    inOrderTraversal(root->right);
}
