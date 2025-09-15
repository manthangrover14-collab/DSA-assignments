#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q1,q2;
    int n=5;
    for(int i=1;i<=n;i++) q1.push(i); // push elements
    while(!q1.empty()){ 
        int x=q1.front(); q1.pop();
        while(!q2.empty()){ q1.push(q2.front()); q2.pop(); }
        q2.push(x);
    }
    cout<<"Stack using two queues (top to bottom): ";
    while(!q2.empty()){ cout<<q2.front()<<" "; q2.pop(); }

    queue<int> q;
    for(int i=1;i<=n;i++){
        int x=i;
        q.push(x);
        for(int j=0;j<q.size()-1;j++){ q.push(q.front()); q.pop(); }
    }
    cout<<"\nStack using one queue (top to bottom): ";
    while(!q.empty()){ cout<<q.front()<<" "; q.pop(); }
}
