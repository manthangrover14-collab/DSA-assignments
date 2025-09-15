#include<iostream>
using namespace std;
int linearMissing(int arr[], int n){
    int sum = n*(n+1)/2;
    for(int i=0;i<n-1;i++) sum -= arr[i];
    return sum;
}
int binaryMissing(int arr[], int n){
    int low=0, high=n-2;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid] != mid+1) high=mid-1;
        else low=mid+1;
    }
    return low+1;
}
int main(){
    int arr[] = {1,2,3,5,6};
    int n = sizeof(arr)/sizeof(arr[0])+1;
    cout<<"Missing (Linear): "<<linearMissing(arr,n)<<endl;
    cout<<"Missing (Binary): "<<binaryMissing(arr,n)<<endl;
}
