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
int main() {
    // Write C++ code here
    //Node *node1 = new Node(5);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    Node  node1(5);
    cout<<node1.data<<endl;
    cout<<node1.next<<endl;
    return 0;
}
