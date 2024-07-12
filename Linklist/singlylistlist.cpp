// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node *next;
  
 Node(int data){
     this->data=data;
 }
};

 void insertbeg(Node *&head,int data){
      Node *temp=new Node(data);
     if(head==NULL){
         head=temp;
     }
     else{
         temp->next=head;
         head=temp;
     }
 }
 
 void insertend(Node *&head,int data){
     Node *temp1=new Node(data);
     Node *temp=head;
     if(temp->next!=NULL){
         temp=temp->next;
     }
     temp->next=temp1;
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
     temp1->next=temp->next;
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
     }
 }
 
 
 int search(Node *&head,int value){
     Node *temp=head;
     int i=0;
     while(temp->next!=NULL){
         if(temp->data==value){
             return i;
         }
         else{
             i++;
             temp=temp->next;
         }
     }
     if(temp->data == value)
     return i;
     
     return -1;
 }
 
 
 void reverse(Node *&head){
     Node *cur=head;
     Node *prev;
     Node *nxt;
     
     while(cur!=NULL){
         nxt=cur->next;
         cur->next=prev;
         prev=cur;
         cur=nxt;
     }
     head=prev;
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
    insertbeg(head,5);
    insertbeg(head,10);
    printdata(head);
    cout<<endl;
    insertend(head,50);
    printdata(head);
    cout<<endl;
    insertatpos(head,100,1);
    printdata(head);
    cout<<endl;
    deletenode(head,2);
    printdata(head);
    cout<<endl;
    cout<<search(head,50);
    cout<<endl;
    reverse(head);
    printdata(head);
    return 0;
}
