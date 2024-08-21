// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class queue{
    public:
    static int front;
    static int rear;
    int q[4];
    
    void enqueue(int data){
        int size=sizeof(q)/sizeof(q[0]);
        if(size-1==rear){
            cout<<"Queue is full"<<endl;
        }
        else{
            if(rear==-1 && front==-1){
                front++;
                rear++;
            }
            else{
                 rear++;
            }
            q[rear]=data;
            cout<<"Enqueued : "<<q[rear]<<endl;
           
        }
    }
    
    void dequeue(){
        if(rear == -1){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<"Element : "<<q[front]<<" is dequeued"<<endl;
            for(int i=0;i<rear;i++){
                q[i]=q[i+1];
            }
            rear--;
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
    q1.dequeue();
    q1.dequeue();
    return 0;
}
