#include<bits/stdc++.h>
using namespace std;

int INF=100000;
int d[10];
int mem[10][10000];
bool picked[10][1000];

int opt(int i, int x){
    if(x<0) return INF;
    if(x==0) return 0;
    if(i==-1) return INF;

    if(mem[i][x]!=-1) return mem[i][x];

    int res=INF;

    int a=1+opt(i,x-d[i]);
    int b=opt(i-1,x);

    if(a<res){
        res=a;
        picked[i][x]=true;
    }
    if(b<res){
        res=b;
        picked[i][x]=false;
    }
    mem[i][x]=res;
    return res;
}

void backtrack(int i,int x){
    if(x==0)
        return;
    if(picked[i][x]){
        backtrack(i,x-d[i]);
        cout<<d[i]<<", ";
    }
    else{
        backtrack(i-1,x);
    }
}

int main(){
    memset(mem,-1,sizeof(mem));
    d[0]=7;
    d[1]=8;
    d[2]=9;
    for(int i=0;i<100;i++){
        cout<<i<<" "<<opt(2,i)<<": ";
        if(opt(2,i)==INF){
            cout<<"  not possible...";
        }
        else{
            backtrack(2,i);
        }
        cout<<endl;
    }
    return 0;
}
