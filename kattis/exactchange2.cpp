#include<bits/stdc++.h>
using namespace std;

int INF=10000;
int d[100];
int mem[100][10000];
int opt(int i, int x){
    if(x<0) return INF;
    if(x==0) return 0;
    if(i==-1) return INF;
    if(mem[i][x]!=-1) return mem[i][x];
    int res=INF;
    res=min(res,1+opt(i-1,x-d[i]));
    res=min(res,opt(i-1,x));
    mem[i][x]=res;
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        memset(mem,-1,sizeof(mem));
        int money,n;
        cin>>money;
        cin>>n;
        for(int i=0;i<n;i++) cin>>d[i];
        for(int i=money;i<INF;i++){
            if(opt(n-1,i)!=INF){
                cout<<i<<" "<<opt(n-1,i)<<endl;
                break;
            }
        }
    }
    return 0;
}
