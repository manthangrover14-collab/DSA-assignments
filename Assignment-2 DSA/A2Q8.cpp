#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,2,3,4,4,5};
    int n=7;
    sort(arr,arr+n);
    int count=1;
    for(int i=1;i<n;i++)
        if(arr[i]!=arr[i-1]) count++;
    cout<<count;
}
