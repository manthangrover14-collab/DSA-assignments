#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int x){data=x;left=right=nullptr;}
};

bool isBSTUtil(Node* root,int minVal,int maxVal){
    if(!root) return true;
    if(root->data<=minVal || root->data>=maxVal) return false;
    return isBSTUtil(root->left,minVal,root->data) &&
           isBSTUtil(root->right,root->data,maxVal);
}

bool isBST(Node* root){
    return isBSTUtil(root,-1000000000,1000000000);
}

int main(){
    return 0;
}
