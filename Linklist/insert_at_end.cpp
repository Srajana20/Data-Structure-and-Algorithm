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

void insert_at_beg(Node *&head,int data){
    Node *temp = new Node(data);
    temp->next=head;
    head=temp;
}

void insert_at_end(Node *&tail,int data){
     Node *temp = new Node(data);
     tail->next=temp;
     tail=temp;
}
int main() {
    // Write C++ code here
    Node *node1 = new Node(5);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    
    insert_at_beg(head,10);
    print(head);
    insert_at_end(tail,15);
    print(head);
    
    return 0;
}
