#include<iostream>
using namespace std;
int main(){
    int n=4;
    int diag[4]={1,2,3,4};
    cout<<"Diagonal Matrix: ";
    for(int i=0;i<n;i++) cout<<diag[i]<<" ";
    cout<<endl;

    int triDiag[3*(n)-2]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Tri-diagonal Matrix stored efficiently"<<endl;

    int lower[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Lower Triangular stored efficiently"<<endl;

    int upper[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Upper Triangular stored efficiently"<<endl;

    int sym[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Symmetric Matrix stored efficiently"<<endl;
}
