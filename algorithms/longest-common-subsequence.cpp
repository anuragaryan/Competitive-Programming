#include<bits/stdc++.h>
using namespace std;

string a="bananinn";
string b="kaninan";
int mem[1000][1000];

int lcs(int i, int j){
    if(i==-1 || j==-1)
        return 0;
    if(mem[i][j]!=-1)
        return mem[i][j];
    int res=0;
    res=max(res,lcs(i-1,j));
    res=max(res,lcs(i,j-1));
    if(a[i]==b[i])
        res=max(res,1+lcs(i-1,j-1));
    mem[i][j]=res;
    return res;
}

int main(){
    memset(mem,-1,sizeof(mem));
    cout<<lcs(a.size()-1, b.size()-1)<<endl;
    return 0;
}
