#include <iostream>
#include <algorithm>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int x){data=x;left=right=nullptr;}
};

Node* insertBST(Node* root,int x){
    if(!root) return new Node(x);
    if(x<root->data) root->left=insertBST(root->left,x);
    else if(x>root->data) root->right=insertBST(root->right,x);
    return root;
}

Node* minNode(Node* root){
    while(root->left) root=root->left;
    return root;
}

Node* deleteBST(Node* root,int key){
    if(!root) return root;
    if(key<root->data) root->left=deleteBST(root->left,key);
    else if(key>root->data) root->right=deleteBST(root->right,key);
    else{
        if(!root->left) return root->right;
        else if(!root->right) return root->left;
        Node* t=minNode(root->right);
        root->data=t->data;
        root->right=deleteBST(root->right,t->data);
    }
    return root;
}

int maxDepth(Node* root){
    if(!root) return 0;
    return 1+max(maxDepth(root->left),maxDepth(root->right));
}

int minDepth(Node* root){
    if(!root) return 0;
    if(!root->left) return 1+minDepth(root->right);
    if(!root->right) return 1+minDepth(root->left);
    return 1+min(minDepth(root->left),minDepth(root->right));
}

int main(){
    return 0;
}
