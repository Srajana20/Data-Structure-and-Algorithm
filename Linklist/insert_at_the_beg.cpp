// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *&head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}

void insert(Node *&head,int data){
    Node *temp = new Node(data);
    temp->next=head;
    head=temp;
}
int main() {
    // Write C++ code here
    Node *node1 = new Node(5);
    Node *head = node1;
    print(node1);
    
    insert(node1,10);
    print(node1);
    
    
    return 0;
}
