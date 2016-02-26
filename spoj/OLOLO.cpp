#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int a,res=0;
    while(n--){
        cin>>a;
        res = res^a;
    }
    cout<<res<<endl;
    return 0;
}
