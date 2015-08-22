#include<bits/stdc++.h>
using namespace std;
int a[1000];
int mem[1000];

int lis(int i){
    if(mem[i]!=-1)
        return mem[i];
    int res=1;
    for(int j=0;j<i;j++)
        if(a[j]<a[i])
            res=max(res,1+lis(j));
    mem[i]=res;
    return res;
}
int main(){
    memset(mem,-1,sizeof(mem));
    a[0]=5;a[1]=1;a[2]=8;a[3]=1;a[4]=9;a[5]=2;
    int n=6;
    int mx=0;
    for(int i=0;i<n;i++)
        mx=max(mx,lis(i));
    cout<<"longest: "<<mx<<endl;;
    for(int i=0;i<n;i++)
        cout<<a[i]<<": "<<lis(i)<<endl;
    return 0;
}
