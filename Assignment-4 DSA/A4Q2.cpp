#include<iostream>
using namespace std;
int main(){
    int n=5, queue[5], front=-1, rear=-1, choice, val;
    do{
        cout<<"\n1.Enqueue 2.Dequeue 3.IsEmpty 4.IsFull 5.Display 6.Peek 0.Exit\n";
        cin>>choice;
        switch(choice){
            case 1:
                if((front==0 && rear==n-1) || (rear+1)%n==front) cout<<"Queue Full";
                else{
                    cin>>val;
                    if(front==-1) front=0;
                    rear=(rear+1)%n;
                    queue[rear]=val;
                }
                break;
            case 2:
                if(front==-1) cout<<"Queue Empty";
                else{
                    cout<<"Dequeued: "<<queue[front];
                    if(front==rear) front=rear=-1;
                    else front=(front+1)%n;
                }
                break;
            case 3:
                cout<<(front==-1?"Empty":"Not Empty");
                break;
            case 4:
                cout<<((front==0 && rear==n-1)||(rear+1)%n==front?"Full":"Not Full");
                break;
            case 5:
                if(front==-1) break;
                int i=front;
                while(true){
                    cout<<queue[i]<<" ";
                    if(i==rear) break;
                    i=(i+1)%n;
                }
                break;
            case 6:
                if(front==-1) cout<<"Queue Empty";
                else cout<<"Front: "<<queue[front];
                break;
        }
    }while(choice!=0);
}
