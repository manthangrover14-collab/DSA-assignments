#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    int arr[]={4,7,11,20,5,9}, n=6;
    for(int i=0;i<n;i++) q.push(arr[i]);
    queue<int> firstHalf;
    for(int i=0;i<n/2;i++){ firstHalf.push(q.front()); q.pop(); }
    while(!firstHalf.empty()){
        q.push(firstHalf.front()); cout<<firstHalf.front()<<" "; firstHalf.pop();
        cout<<q.front()<<" "; q.pop();
    }
}
