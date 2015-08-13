#include<bits/stdc++.h>
using namespace std;

struct union_find{
    vector<int>parent;
    union_find(int n){
        parent=vector<int>(n);
        for(int i=0;i<n;i++)
            parent[i]=i;
    }
    int find(int x){
        if(parent[x]==x)
            return x;
        else{
            parent[x]=find(parent[x]);
            return parent[x];
        }
    }
    void unite(int x, int y){
        parent[find(x)]=find(y);
    }

};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        union_find uf(n);
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            a--;
            b--;
            uf.unite(a,b);
        }
        vector<int> sz(n,0);
        for(int i=0;i<n;i++){
            sz[uf.find(i)]++;
        }
        int mx = 0;
        for(int i=0;i<n;i++){
            if(i==uf.find(i)){
                mx=max(mx,sz[i]);
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
