#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s,mn=1e9;
        cin>>s;
        int arr[s];
        for(int i=0;i<s;i++)
            cin>>arr[i];
        for(int i=0;i<s;i++){
            int dist=0;
            for(int j=0;j<s;j++){
                dist+=abs(arr[i]-arr[j]);
            }
            if(dist<mn) mn=dist;
        }
        cout<<mn<<endl;
    }
    return 0;
}
