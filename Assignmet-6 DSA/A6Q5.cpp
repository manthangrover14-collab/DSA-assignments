#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int x){data=x;next=nullptr;}
};

bool isCircular(Node* head){
    if(!head) return false;
    Node* cur=head->next;
    while(cur && cur!=head) cur=cur->next;
    return cur==head;
}

int main(){
    return 0;
}
