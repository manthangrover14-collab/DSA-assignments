#include <iostream>
using namespace std;

class PriorityQueue {
public:
    int a[1000];
    int n;
    PriorityQueue(){n=0;}

    void push(int x){
        a[n]=x;
        int i=n;
        n++;
        while(i>0){
            int p=(i-1)/2;
            if(a[i]>a[p]){swap(a[i],a[p]);i=p;}
            else break;
        }
    }

    int top(){
        if(n==0) return -1;
        return a[0];
    }

    void pop(){
        if(n==0) return;
        a[0]=a[n-1];
        n--;
        heapify(0);
    }

    void heapify(int i){
        int largest=i;
        int l=2*i+1, r=2*i+2;
        if(l<n && a[l]>a[largest]) largest=l;
        if(r<n && a[r]>a[largest]) largest=r;
        if(largest!=i){
            swap(a[i],a[largest]);
            heapify(largest);
        }
    }
};

int main(){
    return 0;
}
