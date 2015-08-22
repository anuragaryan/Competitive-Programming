#include<bits/stdc++.h>
using namespace std;
int mem[10000];
int fibonacci(int n){
    if(n<=2)
        return 1;
    if(mem[n]!=-1)
        return mem[n];
    int res=fibonacci(n-1)+fibonacci(n-2);
    return mem[n]=res;
}
int main(){
    memset(mem,-1,sizeof(mem));
    for(int i=1;i<1000;i++)
        cout<<i<<" "<<fibonacci(i)<<endl;
    return 0;
}
