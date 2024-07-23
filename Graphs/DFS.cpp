// Online C++ compiler to run C++ program online
#include <iostream>
#include <list>
#include<vector>
#include<unordered_map>

using namespace std;
class Graph{
    public:
    
    unordered_map<int,list<int>> adj;
    
    
    void createadj(int u,int v,int direction){
        adj[u].push_back(v);
        if(direction == 0){
            adj[v].push_back(u);
        }
    }
    
    void printgraph(){
        for(auto &x:adj){
            cout<<x.first<<"->";
            for(auto &j:x.second){
                cout<<j<<",";
            }
              cout<<endl;
        }
      
    }
};


void dfs(int node,unordered_map<int,list<int>> &adj,vector<bool> &visited){
   
    visited[node]=true;
    cout<<node<<" ";
    
    for(auto &x:adj[node]){
         if(!visited[x]){
        dfs(x,adj,visited);
    }
  }
   
    
}
int main() {
    int n;
    cout<<"enter number of nodes"<<endl;
    cin>>n;
    
    int m;
    cout<<"enter number of edges"<<endl;
    cin>>m;
    
    int u,v;
    vector<bool> visited (n,false);
    
    cout<<"enter the values"<<endl;
    Graph g;
    vector<int> component;
    
    for(int i=0;i<m;i++){
        cin>>u;
        cin>>v;
        g.createadj(u,v,0);
    }
    cout<<"Graph"<<endl;
    g.printgraph();
    
   
    dfs(0,g.adj,visited);
        
        
    
    
    return 0;
}
