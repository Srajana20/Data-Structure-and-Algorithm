// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
class stack{
  public:
  static int top;
  int a[3];
  
  void push(int x){
      int size = sizeof(a)/sizeof(a[0]);
      if(top==size-1){
          cout<<"Stack overflow"<<endl;
      }
      else{
          a[++top]=x;
          cout<<"element :"<<x<<" is pushed"<<endl;
      }
  }
  
    void pop(){
      if(top==-1){
          cout<<"Stack underflow"<<endl;
      }
      else{
          cout<<"element :"<<a[top]<<" is poped"<<endl;
          top=top-1;
      }
  }
};

int stack::top=-1;

int main() {
   stack st;
   st.push(10);
   st.push(20);
   st.push(30);
   st.push(40);
   st.push(40);
   cout<<endl;
   st.pop();
   st.pop();
   st.pop();
   st.pop();

    return 0;
}
