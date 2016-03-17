#include<bits/stdc++.h>
using namespace std;
string pattern(int n){
    string ret;
    if(n==2) return "2";
    else if(n==1) return "2(0)";
    else if(n<=0) return "";
    int e=0,rem=0;
    while(n>rem){
        rem=n%(int)pow(2,e);
        e++;
    }
    if(e-2==1) ret="2+"+pattern(n-pow(2,e-2));
    else ret="2("+pattern(e-2)+")+"+pattern(n-pow(2,e-2));
    if(n<=pow(2,e-2)) ret.pop_back();
    return ret;
}
int main(){
    int n[7]={137,1315,73,136,255,1384,16385};
    for(int i=0;i<7;i++){
        cout<<n[i]<<"="<<pattern(n[i])<<endl;
    }
    return 0;
}
