#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};


Node* builtTree(Node *root){
    int data;
    cout<<"Enter a data"<<endl;
    cin>>data;
    root = new Node(data);
    
    if(data==-1){
        return NULL;
    }
    
    cout<<"Enter data for inserting into left of "<<data<<endl;
    root->left=builtTree(root->left);
    cout<<"Enter data for inserting into right of "<<data<<endl;
    root->right=builtTree(root->right);
    
    return root;
}


void inorder(Node *root){
    if(root == NULL){
        return ; 
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}


void preorder(Node *root){
   if(root == NULL){
        return ; 
    }
    
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root){
   if(root == NULL){
        return ; 
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

int main() {
    
    
    Node *root = NULL;
    root=builtTree(root);
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    return 0;
}
