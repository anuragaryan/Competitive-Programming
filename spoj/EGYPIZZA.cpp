#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    map<string,int>pizza;
    string str;
    cin>>n;
    while(n--){
        cin>>str;
        pizza[str]++;
    }
    int a=pizza["3/4"];
    int b=pizza["1/4"];
    int c=pizza["1/2"];
    if(a>b) b=0;
    else b=b-a;
    c=c+b/2;
    b=b%2;
    if(c%2==0)c=c/2;
    else{
        c=c/2 +1;
        b>0? b-=1: b;
    }
    cout<<a+b+c+1<<endl;
}
