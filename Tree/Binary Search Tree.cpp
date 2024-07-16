#include <iostream>
#include<queue>
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


Node* insertintoBST(Node *root,int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    
    
    if(data>root->data){
        root->right=insertintoBST(root->right,data);
    }
    else{
        root->left=insertintoBST(root->left,data);
    }
    return root;
}

Node * takeinput(Node *root){
    int data;
    cin>>data;
    
    while(data!=-1){
        root = insertintoBST(root,data);
        cin>>data;
    }
    
    return root;
}

void levelorder(Node *root){
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        
    }
}


void inorder(Node *root){
    
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node *root){
    
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    
}

void preorder(Node *root){
    
    if(root==NULL){
        return;
    }
   
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    
    
    Node *root = NULL;
    root=takeinput(root);
    cout<<"printing BST levelorder:"<<endl;
    levelorder(root);
    cout<<"inorder BST"<<endl;
    inorder(root);
    cout<<endl;
    cout<<"preorder"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"postorder"<<endl;
    postorder(root);
    return 0;
}
