#include <iostream>
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
    else root->right=insertBST(root->right,x);
    return root;
}

Node* searchRec(Node* root,int key){
    if(!root || root->data==key) return root;
    if(key<root->data) return searchRec(root->left,key);
    return searchRec(root->right,key);
}

Node* searchNonRec(Node* root,int key){
    while(root){
        if(root->data==key) return root;
        if(key<root->data) root=root->left;
        else root=root->right;
    }
    return nullptr;
}

Node* minNode(Node* root){
    while(root && root->left) root=root->left;
    return root;
}

Node* maxNode(Node* root){
    while(root && root->right) root=root->right;
    return root;
}

Node* successor(Node* root,Node* x){
    if(x->right) return minNode(x->right);
    Node* succ=nullptr;
    while(root){
        if(x->data<root->data){succ=root;root=root->left;}
        else if(x->data>root->data) root=root->right;
        else break;
    }
    return succ;
}

Node* predecessor(Node* root,Node* x){
    if(x->left) return maxNode(x->left);
    Node* pre=nullptr;
    while(root){
        if(x->data>root->data){pre=root;root=root->right;}
        else if(x->data<root->data) root=root->left;
        else break;
    }
    return pre;
}

int main(){
    return 0;
}
