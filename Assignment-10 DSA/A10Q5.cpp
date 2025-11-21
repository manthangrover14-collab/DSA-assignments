#include <iostream>
#include <unordered_set>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int x){data=x;next=nullptr;}
};

bool hasCycle(Node* head){
    unordered_set<Node*> s;
    while(head){
        if(s.count(head)) return true;
        s.insert(head);
        head=head->next;
    }
    return false;
}

int main(){
    return 0;
}
