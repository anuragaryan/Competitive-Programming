#include<bits/stdc++.h>
using namespace std;

vector<int>adj[2100];
vector<int>low(2100),num(2100, -1);
vector<bool>incomp(2100, false);

int curnum=0;
int components=0;

stack<int>comp;

void scc(int u){
    comp.push(u);
    incomp[u]=true;
    low[u]=num[u]=curnum++;

    for(int i=0;i<adj[u].size();i++){
        int v=adj[u][i];
        if(num[v]==-1){
            scc(v);
            low[u]=min(low[u],low[v]);
        }
        else if(incomp[v]){
            low[u]=min(low[u],num[v]);
        }
    }
    if(num[u]==low[u]){
        while(true){
            int cur=comp.top();
            comp.pop();
            incomp[cur]=false;
            if(cur==u){
                break;
            }
        }
        components++;
    }
}

int main(){
    int n,m;
    while(scanf("%d %d\n",&n,&m)!=EOF && !(n==0 && m==0)){
        curnum=0;
        components=0;
        num.assign(2100,-1);
        for(int i=0;i<m;i++){
            int a,b,p;
            scanf("%d %d %d\n",&a, &b, &p);
            a--; b--;
            if(p==1){
                adj[a].push_back(b);
            }
            else{
                adj[a].push_back(b);
                adj[b].push_back(a);
            }
        }
        for(int i=0;i<n;i++){
            if(num[i]==-1){
                scc(i);
            }
        }
        if(components==1){
            printf("%d\n",1);
        }
        else{
            printf("%d\n",0);
        }
        for(int i=0;i<n;i++){
            adj[i].clear();
        }
    }
    return 0;
}
