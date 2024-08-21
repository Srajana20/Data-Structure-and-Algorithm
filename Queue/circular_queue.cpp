
#include <iostream>
using namespace std;

class queue{
    public:
    static int front;
    static int rear;
    int q[4];
    int size=sizeof(q)/sizeof(q[0]);
    void enqueue(int data){
       
        if(front==0 && rear==size-1 || rear==(front-1)){
            cout<<"Queue is full"<<endl;
        }
        else{
            if(rear==-1 && front==-1){
                front++;
                rear++;
            }
            else if(front!=0 && rear==size-1){
                rear=0;
            }
            else{
                 rear++;
            }
            q[rear]=data;
            cout<<"Enqueued : "<<q[rear]<<endl;
           
        }
    }
    
    void dequeue(){
        if(front == -1){
            cout<<"Queue is empty"<<endl;
        }
        else if(front == rear){
             cout<<"Dequeued : "<<q[front]<<endl;
            front=-1;
            rear=-1;
        }
        else if(front == size-1){
            cout<<"Dequeued : "<<q[front]<<endl;
            front =0;
        }
        else{
            cout<<"Dequeued : "<<q[front]<<endl;
            front ++;
        }
    }
};

int queue::front=-1;
int queue::rear=-1;

int main() {
    queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    cout<<endl;
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    cout<<endl;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    cout<<endl;
    q1.dequeue();
    q1.dequeue();
    return 0;
}
