#include <iostream>
#include <queue>

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node* createNode(int data);
Node* insertion(Node* root , int data);
void levelOrderTraversal(Node *root);

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
    levelOrderTraversal(root);
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

void levelOrderTraversal(Node *root){
    std::cout << "Level Order Traversal - " ;
    if(root == NULL) return;
    std::queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        std::cout << " " << temp->data;
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
        q.pop();
    }
}
