#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int x){data=x;next=nullptr;}
};

void displayFull(Node* head){
    if(!head) return;
    Node* cur=head;
    while(true){
        cout<<cur->data<<" ";
        cur=cur->next;
        if(cur==head) break;
    }
    cout<<head->data;
}

int main(){
    return 0;
}
