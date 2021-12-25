#include <iostream>

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node* createNode(int data);
Node* insertion(Node* root , int data);
int findHeightOfTree(Node *root);

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
    int heightOfHeight = findHeightOfTree(root);
    std::cout << "Height of tree is " << heightOfHeight << std::endl;
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


int findHeightOfTree(Node *root){
    /*
    if(root == NULL) return -1;
    int left_tree = findHeightOfTree(root->left);
    int right_tree = findHeightOfTree(root->right);
    return std::max(left_tree,right_tree)+1;
    */

    if(root == NULL) return -1;
    return std::max(findHeightOfTree(root->left),findHeightOfTree(root->right)) + 1 ;
}
