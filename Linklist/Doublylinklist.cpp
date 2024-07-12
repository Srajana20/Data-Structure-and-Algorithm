// Online C++ compiler to run C++ program online
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node *next;
  Node *prev;
  
 Node(int data){
     this->data=data;
     this->prev=NULL;
     this->next=NULL;
 }
};

 void insertbeg(Node *&head,int data){
      Node *temp=new Node(data);
     if(head==NULL){
         head=temp;
     }
     else{
         temp->next=head;
         head->prev=temp;
         head=temp;
     }
 }
 
 void insertend(Node *&head,int data){
     Node *temp1=new Node(data);
     Node *temp=head;
     while(temp->next!=NULL){
         temp=temp->next;
     }
     temp->next=temp1;
     temp1->prev=temp;
     temp1->next=NULL;
 }
 
 
 void insertatpos (Node *&head,int data,int pos){
     Node *temp1=new Node(data);
     Node *temp=head;
     Node *nxt;
     int count=0;
     
     if(pos==0){
         insertbeg(head,data);
     }
     else{
         while(count<pos-1 )
     {
         temp=temp->next;
         count++;
     }
     temp1->prev=temp;
     temp1->next=temp->next;
     if(temp->next!=NULL){
         temp->next->prev=temp1;
     }
     temp->next=temp1;
    
     }
     
 }
 
 
 
 void deletenode(Node *&head,int pos){
     Node *temp=head;
     int count=0;
     if(pos==0){
         head=temp->next;
     }
     else{
         while(count<pos-1 )
     {
         temp=temp->next;
         count++;
     }
     temp->next=temp->next->next;
     if(temp->next!=NULL){
         temp->next->prev=temp;
     }
     }
 }
 
 
 void reverse(Node *&head){
     Node *cur=head;
     Node *prv=NULL;
     Node *nxt;
     
     while(cur!=NULL){
         nxt=cur->next;
         cur->next=prv;
         cur->prev=nxt;
         prv=cur;
         cur=nxt;
     }
     head=prv;
 }
 
 void printdata(Node *&head){
     Node *temp=head;
     while(temp!=NULL){
         cout<<temp->data<<" ";
         temp=temp->next;
     }
 }
 
 
 
int main() {
    Node *b = new Node(10);
    Node *head=NULL;
    cout<<"inserting at begining"<<endl;
    insertbeg(head,5);
    insertbeg(head,10);
    printdata(head);
    cout<<endl;
    cout<<"insert at end"<<endl;
    insertend(head,50);
    printdata(head);
    cout<<endl;
    cout<<"insert at end"<<endl;
    insertend(head,7);
    printdata(head);
    cout<<endl;
    cout<<"inserting at position"<<endl;
    insertatpos(head,100,1);
    printdata(head);
    cout<<endl;
    cout<<"insert at end"<<endl;
    insertend(head,7);
    printdata(head);
    cout<<endl;
    cout<<"delete node"<<endl;
    deletenode(head,2);
    printdata(head);
    cout<<endl;
    cout<<"reverse"<<endl;
    reverse(head);
    printdata(head);
    cout<<endl;
    cout<<"insert at end"<<endl;
    insertend(head,5);
    printdata(head);
    return 0;
}
