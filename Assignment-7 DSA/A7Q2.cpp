#include <iostream>
using namespace std;

void improvedSelectionSort(int a[], int n){
    int left=0, right=n-1;
    while(left<right){
        int minPos=left, maxPos=left;
        for(int i=left;i<=right;i++){
            if(a[i]<a[minPos]) minPos=i;
            if(a[i]>a[maxPos]) maxPos=i;
        }
        swap(a[left],a[minPos]);
        if(maxPos==left) maxPos=minPos;
        swap(a[right],a[maxPos]);
        left++;
        right--;
    }
}

void printArr(int a[], int n){
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}

int main(){
    return 0;
}
