#include<iostream>
using namespace std;
int main(){
    int A[3][3]={{1,0,0},{0,2,0},{0,0,3}};
    int B[3][3]={{0,1,0},{2,0,0},{0,0,3}};
    int n=3;

    int transpose[3][3];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) transpose[j][i]=A[i][j];
    cout<<"Transpose:"<<endl;
    for(int i=0;i<n;i++){for(int j=0;j<n;j++) cout<<transpose[i][j]<<" "; cout<<endl;}

    int add[3][3];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) add[i][j]=A[i][j]+B[i][j];
    cout<<"Addition:"<<endl;
    for(int i=0;i<n;i++){for(int j=0;j<n;j++) cout<<add[i][j]<<" "; cout<<endl;}

    int mul[3][3]={0};
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            for(int k=0;k<n;k++) mul[i][j]+=A[i][k]*B[k][j];
    cout<<"Multiplication:"<<endl;
    for(int i=0;i<n;i++){for(int j=0;j<n;j++) cout<<mul[i][j]<<" "; cout<<endl;}
}
