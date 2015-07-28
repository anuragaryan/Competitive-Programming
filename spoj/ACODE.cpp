#include<iostream>
#include<string>
#include<cstring>
using namespace std;
#define i64 long long
#define MAX 5010
i64 dp[MAX];
string str;
int len;

i64 solve(int i){
	if(i>=len) return 1;
	if(dp[i]) return dp[i];
	if(str[i]=='0') return 0;
	i64 ret=0;
	ret+=solve(i+1);
	if(i+1<len && 10*(str[i]-'0')+(str[i+1]-'0')<=26) ret+=solve(i+2);
	return dp[i]=ret;
}
int main(){
	while(cin>>str && str[0]!='0'){
		len=str.length();
		memset(dp,0,sizeof(dp));
		cout<<solve(0)<<endl;
	}
	return 0;
}
