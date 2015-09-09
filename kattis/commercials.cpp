#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int mem[100005];
bool comp[100005];
int max_sum(int i){
    if(i==0)
        return arr[i];
    if(comp[i])
        return mem[i];
    int res=max(arr[i],arr[i]+max_sum(i-1));
    mem[i]=res;
    comp[i]=true;
    return res;
}
int main(){
    int n,p;
    cin>>n>>p;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]-=p;
    }
    memset(comp,0,sizeof(comp));
    int mx=0;
    for(int i=0;i<n;i++)
        mx=max(mx,max_sum(i));
    cout<<mx<<endl;
    return 0;
}
