#include<bits/stdc++.h>
using namespace std;
int arr[7];
int mem[1000];
bool comp[1000];

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
    memset(comp,0,sizeof(comp));
    int maximum=0;
    arr[0]=-15; arr[1]=8;arr[2]=-2;arr[3]=1;arr[4]=0;arr[5]=6;arr[6]=-3;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    for(int i=0;i<n;i++)
        maximum=max(maximum,max_sum(i));
    cout<<maximum<<endl;
}

