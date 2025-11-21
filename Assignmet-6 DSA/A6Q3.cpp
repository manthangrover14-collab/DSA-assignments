#include <iostream>
using namespace std;

class DNode{
public:
    int data;
    DNode* next;
    DNode* prev;
    DNode(int x){data=x;next=prev=nullptr;}
};

class CNode{
public:
    int data;
    CNode* next;
    CNode(int x){data=x;next=nullptr;}
};

int sizeDLL(DNode* head){
    int c=0;
    while(head){c++;head=head->next;}
    return c;
}

int sizeCLL(CNode* head){
    if(!head) return 0;
    int c=1;
    CNode* cur=head->next;
    while(cur!=head){c++;cur=cur->next;}
    return c;
}

int main(){
    return 0;
}
