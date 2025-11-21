#include <iostream>
using namespace std;

class CNode {
public:
    int data;
    CNode* next;
    CNode(int x){data=x;next=nullptr;}
};

class CircularList {
public:
    CNode* head;
    CircularList(){head=nullptr;}

    void insert(int x,string pos="",int target=0,bool before=false,bool after=false){
        CNode* n=new CNode(x);
        if(!head){head=n;n->next=n;return;}

        if(pos=="first"){
            CNode* cur=head;
            while(cur->next!=head) cur=cur->next;
            n->next=head;
            cur->next=n;
            head=n;
            return;
        }
        if(pos=="last"){
            CNode* cur=head;
            while(cur->next!=head) cur=cur->next;
            cur->next=n;
            n->next=head;
            return;
        }
        CNode* cur=head;
        while(true){
            if(cur->data==target){
                if(before){
                    if(cur==head) insert(x,"first");
                    else{
                        CNode* p=head;
                        while(p->next!=cur) p=p->next;
                        p->next=n;
                        n->next=cur;
                    }
                }
                if(after){
                    n->next=cur->next;
                    cur->next=n;
                }
                break;
            }
            cur=cur->next;
            if(cur==head) break;
        }
    }

    void remove(int key){
        if(!head) return;
        CNode* cur=head;
        CNode* p=nullptr;
        while(true){
            if(cur->data==key){
                if(cur==head){
                    CNode* t=head;
                    while(t->next!=head) t=t->next;
                    if(head->next==head) head=nullptr;
                    else{t->next=head->next;head=head->next;}
                } else p->next=cur->next;
                break;
            }
            p=cur;
            cur=cur->next;
            if(cur==head) break;
        }
    }

    int search(int key){
        if(!head) return -1;
        CNode* cur=head;
        int pos=1;
        while(true){
            if(cur->data==key) return pos;
            cur=cur->next;
            pos++;
            if(cur==head) break;
        }
        return -1;
    }
};

class DNode {
public:
    int data;
    DNode* next;
    DNode* prev;
    DNode(int x){data=x;next=nullptr;prev=nullptr;}
};

class DoublyList {
public:
    DNode* head;
    DoublyList(){head=nullptr;}

    void insert(int x,string pos="",int target=0,bool before=false,bool after=false){
        DNode* n=new DNode(x);
        if(!head){head=n;return;}

        if(pos=="first"){
            n->next=head;
            head->prev=n;
            head=n;
            return;
        }
        if(pos=="last"){
            DNode* cur=head;
            while(cur->next) cur=cur->next;
            cur->next=n;
            n->prev=cur;
            return;
        }
        DNode* cur=head;
        while(cur){
            if(cur->data==target){
                if(before){
                    if(cur==head) insert(x,"first");
                    else{
                        DNode* p=cur->prev;
                        p->next=n;
                        n->prev=p;
                        n->next=cur;
                        cur->prev=n;
                    }
                }
                if(after){
                    DNode* nxt=cur->next;
                    cur->next=n;
                    n->prev=cur;
                    n->next=nxt;
                    if(nxt) nxt->prev=n;
                }
                break;
            }
            cur=cur->next;
        }
    }

    void remove(int key){
        if(!head) return;
        DNode* cur=head;
        if(cur->data==key){
            if(cur->next){head=cur->next;head->prev=nullptr;}
            else head=nullptr;
            return;
        }
        while(cur){
            if(cur->data==key){
                DNode* p=cur->prev;
                DNode* nxt=cur->next;
                p->next=nxt;
                if(nxt) nxt->prev=p;
                break;
            }
            cur=cur->next;
        }
    }

    int search(int key){
        int pos=1;
        DNode* cur=head;
        while(cur){
            if(cur->data==key) return pos;
            cur=cur->next;
            pos++;
        }
        return -1;
    }
};

int main(){
    return 0;
}