#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i=1;
    while(cin>>n){
        cout<<"Case "<<i<<": ";
        cout<<floor(log10(3)+n*log10(1.5))+1<<endl;
        ++i;
    }
    return 0;
}
