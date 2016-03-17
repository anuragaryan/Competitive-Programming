#include<bits/stdc++.h>
using namespace std;
int dp[2101][2101];
int min(int x, int y, int z){
    return min(min(x,y),z);
}
int dist(string str1, string str2){
    int len1=str1.length();
    int len2 = str2.length();
    for(int i=0;i<=len1;i++){
        for(int j=0;j<=len2;j++){
            if(i==0) dp[i][j]=j;
            else if(j==0) dp[i][j]=i;
            else if(str1[i-1]==str2[j-1])
                dp[i][j]=dp[i-1][j-1];
            else
                dp[i][j]=1+min(dp[i][j-1], //insert
                        dp[i-1][j],         //remove
                        dp[i-1][j-1]);      //replace
        }
    }
    return dp[len1][len2];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string str1, str2;
        cin>>str1>>str2;
        //Levenshtein Distance
        cout<<dist(str1,str2)<<endl;
    }
    return 0;
}
