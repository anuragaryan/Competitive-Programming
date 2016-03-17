#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        long long min=1000000000;
        cin>>n>>k;
        long long height[n];
        for(int i=0;i<n;i++)
            cin>>height[i];
        sort(height,height+n);
        for(int i=0;i<n-k+1;i++){
            if(min>abs(height[i]-height[i+k-1]))
                min=abs(height[i]-height[i+k-1]);
        }
        cout<<min<<endl;
    }
    return 0;
}
