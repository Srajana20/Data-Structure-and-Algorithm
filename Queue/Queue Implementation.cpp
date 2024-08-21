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
        if(size==rear){
            cout<<"Queue is full"<<endl;
        }
        else{
            
            q[rear]=data;
            cout<<"Enqueued : "<<q[rear]<<endl;
            rear++;
           
        }
    }
    
    void dequeue(){
        if(rear == front){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<"Element : "<<q[front]<<" is dequeued"<<endl;
            q[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }
    }
};

int queue::front=0;
int queue::rear=0;

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
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    
    q1.dequeue();
    q1.dequeue();
    cout<<q1.q[q1.front]<<endl;
    return 0;
}
