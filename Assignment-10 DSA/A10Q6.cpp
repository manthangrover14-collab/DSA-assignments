#include <iostream>
#include <unordered_set>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int x){data=x;left=right=nullptr;}
};

bool check(Node* root, unordered_set<int>& s){
    if(!root) return false;
    if(s.count(root->data)) return true;
    s.insert(root->data);
    return check(root->left,s) || check(root->right,s);
}

bool containsDuplicate(Node* root){
    unordered_set<int> s;
    return check(root,s);
}

int main(){
    return 0;
}
