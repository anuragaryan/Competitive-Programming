#include<iostream>
#include<vector>
using namespace std;
#define MAX 50005
int total=0;
bool visited[MAX]={false};
int dfs(vector<int>adj[],int root){
    int m,m1=-1,m2=-1;
    visited[root]=true;
    for(int i=0;i<adj[root].size();i++){
        if(!visited[adj[root][i]]){
            m=dfs(adj,adj[root][i]);
            if(m>=m1){
                m2=m1;
                m1=m;
            }
            else if(m>m2) m2=m;
        }
    }
    total=max(total,m1+m2+2);
    return (m1+1);
}
int main(){
    int node;
    cin>>node;
    vector<int>adj[node+5];
    int u,v;
    while(cin>>u && cin>>v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(adj,1);
    cout<<total<<endl;;
    return 0;
}
