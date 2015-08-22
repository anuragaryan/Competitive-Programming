#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int m;
        cin>>m;
        int dp[n+1],val[m];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<m;i++)
            cin>>val[i];
        for (int i=0;i<n+1;i++){
            for(int j=0;j<m;j++){
                if(i-val[j]>=0 && dp[i-val[j]]==0){
                    dp[i]=1;
                    break;
                }
            }
        }
        if(dp[n]==1) cout<<"Stan wins"<<endl;
        else cout<<"Ollie wins"<<endl;
    }
    return 0;
}
