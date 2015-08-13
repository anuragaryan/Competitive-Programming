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
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    union_find uf(5);
    uf.unite(a,b);
    uf.unite(c,d);
    cout<<uf.find(b)<<endl;
    return 0;
}
