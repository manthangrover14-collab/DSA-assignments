#include<iostream>
using namespace std;
int main(){
    int n=5, queue[5], front=-1, rear=-1, choice, val;
    do{
        cout<<"\n1.Enqueue 2.Dequeue 3.IsEmpty 4.IsFull 5.Display 6.Peek 0.Exit\n";
        cin>>choice;
        switch(choice){
            case 1:
                if(rear==n-1) cout<<"Queue Full";
                else{
                    cin>>val;
                    if(front==-1) front=0;
                    queue[++rear]=val;
                }
                break;
            case 2:
                if(front==-1 || front>rear) cout<<"Queue Empty";
                else cout<<"Dequeued: "<<queue[front++];
                break;
            case 3:
                cout<<((front==-1 || front>rear)?"Empty":"Not Empty");
                break;
            case 4:
                cout<<(rear==n-1?"Full":"Not Full");
                break;
            case 5:
                for(int i=front;i<=rear;i++) cout<<queue[i]<<" ";
                break;
            case 6:
                if(front==-1 || front>rear) cout<<"Queue Empty";
                else cout<<"Front: "<<queue[front];
                break;
        }
    }while(choice!=0);
}
