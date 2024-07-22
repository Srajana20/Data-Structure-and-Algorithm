
#include <iostream>
#include<unordered_map>
#include<list>

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

int main() {
    
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

    return 0;
}
