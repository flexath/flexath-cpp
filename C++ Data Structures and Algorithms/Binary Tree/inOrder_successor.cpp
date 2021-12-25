#include <iostream>
#include <queue>

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node* createNode(int data);
Node* insertion(Node* root , int data);
void inOrderTraversal(Node *root);
Node* inOrderSuccessor(Node *root,int data);

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
    std::cout << "\nInorder Traversal - " ;
    inOrderTraversal(root);
    Node *successor_value = inOrderSuccessor(root,10);
    std::cout << "\nSuccessor Value is " << successor_value->data << std::endl;
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

void inOrderTraversal(Node *root){
    if(root == NULL) return;
    inOrderTraversal(root->left);
    std::cout << " " << root->data;
    inOrderTraversal(root->right);
}

Node* currentNode(Node *root,int data){
    if(root == NULL) return 0;
    else if(data < root->data) return currentNode(root->left,data);
    else if(data > root->data) return currentNode(root->right,data);
    else{
        return root;
    }
}

Node* findMin(Node *root){
    if(root == NULL) return 0;
    while(root->left != NULL){
        root = root->left;
    }
    return root;
}

Node* inOrderSuccessor(Node *root,int data){
    Node *temp = currentNode(root,data);
    if(temp == NULL) return 0;
    else if(temp->right != NULL){
        return findMin(temp->right);
    }
    else{
        Node *successor = NULL;
        Node *ancestor = root;
        while(ancestor != temp){
            if(temp->data < ancestor->data ){
                successor = ancestor;
                ancestor = ancestor->left;
            }
            else{
                ancestor = ancestor->right;
            }
        }
        return successor;
    }
}
