#include<iostream>
using namespace std;
int main(){
    int n=5, stack[5], top=-1, choice, val;
    do{
        cout<<"\n1.Push 2.Pop 3.IsEmpty 4.IsFull 5.Display 6.Peek 0.Exit\n";
        cin>>choice;
        switch(choice){
            case 1:
                if(top==n-1) cout<<"Stack Full";
                else{
                    cin>>val;
                    stack[++top]=val;
                }
                break;
            case 2:
                if(top==-1) cout<<"Stack Empty";
                else cout<<"Popped: "<<stack[top--];
                break;
            case 3:
                cout<<(top==-1?"Empty":"Not Empty");
                break;
            case 4:
                cout<<(top==n-1?"Full":"Not Full");
                break;
            case 5:
                for(int i=0;i<=top;i++) cout<<stack[i]<<" ";
                break;
            case 6:
                if(top==-1) cout<<"Stack Empty";
                else cout<<"Top: "<<stack[top];
                break;
        }
    }while(choice!=0);
}
