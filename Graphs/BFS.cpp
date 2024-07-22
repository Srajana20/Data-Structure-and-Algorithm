
#include <iostream>
#include<unordered_map>
#include<list>
#include<queue>

using namespace std;

class Graph{
    public:
    unordered_map <int,list<int>> adj;
    
    void adjcreate(int u,int v,int direction){
        adj[u].push_back(v);
        if(direction == 0){
            adj[v].push_back(u);
        }
    }
    
    void printgraph(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
};


void bfs( unordered_map <int,list<int>> adj, vector<bool> visited,int frontnode){
    queue <int> q;
    q.push(frontnode);
    visited[frontnode]=true;
    
    while(!q.empty()){
        int curr= q.front();
        cout<<curr<<" ";
        q.pop();
        
        for(auto x:adj[curr]){
            if(!visited[x]){
                visited[x]=true;
                q.push(x);
            }
        }
    }
    
    
}

int main() {
    // Write C++ code here
    
    Graph g;
   cout<<"enter the nodes"<<endl;
   int n;
   cin>>n;
   
   cout<<"enter number of edges"<<endl;
   int m;
   cin>>m;
   
   cout<<"enter edges "<<endl;
   int u,v;
   for(int i=0;i<m;i++){
       cin>>u;
       cin>>v;
       g.adjcreate(u,v,0);
   }
   cout<<"grapgh is:"<<endl;
   g.printgraph();
   cout<<"appling bfs"<<endl;
   vector<bool> visited (n,false);
   bfs(g.adj,visited,0);

    return 0;
}
