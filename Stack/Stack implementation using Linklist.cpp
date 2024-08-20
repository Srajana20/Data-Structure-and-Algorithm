// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;


class Node{
    public:
    int data;
    Node *next;
    
    Node(int data){
        this->data = data;
        this->next= NULL;
    }
};
class stack{
  public:
  Node *head;
  
  
  stack(){
      this->head=NULL;
  }
  void push(int x){
      Node *newnode = new Node(x);
      if(!newnode){
          cout<<"Stack overflow"<<endl;
      }
      else{
          newnode->next=head;
          head=newnode;
          cout<<"element :"<<x<<" is pushed"<<endl;
      }
  }
  
  
    void pop(){
      if(head == NULL){
          cout<<"Stack underflow"<<endl;
      }
      else{
          Node *temp=head;
          cout<<"element :"<<head->data<<" is poped"<<endl;
          head=head->next;
          delete temp;
      }
  }
  
  
};



int main() {

   stack st;
    st.pop();
   st.push(10);
   st.push(20);
   st.push(30);
   st.push(40);
     
   cout<<endl;
   st.pop();
   st.pop();
   st.pop();
   st.pop();

    return 0;
}
