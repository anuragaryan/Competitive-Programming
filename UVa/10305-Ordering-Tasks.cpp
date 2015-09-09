#include<bits/stdc++.h>
using namespace std;

vector<int>adj[1000];
vector<bool>visited(1000,false);
vector<int>order;

void topsort(int u){
    if(visited[u])
        return;
    visited[u]=true;
    for(int i=0;i<adj[u].size();i++){
        int v=adj[u][i];
        topsort(v);
    }
    order.push_back(u);
}

int main(){
    int n,m;
    while(scanf("%d %d\n",&n,&m)!=EOF && !(n==0 && m==0)){
        for(int i=0;i<m;i++){
            int a,b;
            scanf("%d %d\n",&a,&b);
            a--; b--;
            adj[b].push_back(a);
        }
        order.clear();
        visited.assign(n,false);
        for(int u=0;u<n;u++)
            topsort(u);
        for(int i=0;i<n;i++){
            if(i!=0)
                printf(" ");
            printf("%d",order[i]+1);
        }
        printf("\n");
        for(int i=0;i<n;i++)
            adj[i].clear();
    }
    return 0;
}
