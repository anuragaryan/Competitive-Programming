#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1000];
vector<int> component(1000,-1);

void find_component(int cur_comp, int u){
    if(component[u]!=-1) return;
    component[u]=cur_comp;
    for(int i=0;i<adj[u].size();i++){
        int v=adj[u][i];
        find_component(cur_comp,v);
    }
}

int main(){
    int nodes,edges,x,y;
    cin>>nodes;
    cin>>edges;
    for(int i=0;i<edges;++i){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int components=0;
    for(int u=0;u<nodes;u++){
        if(component[u]==-1){
            find_component(components,u);
            components++;
        }
    }
    cout<<"connected components: "<<components<<endl;
    return 0;
}
