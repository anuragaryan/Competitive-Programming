#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s,ans="";
		cin>>s;
		stack<char>a;
		for(int i=0;i<s.length();i++){
			if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^')
				a.push(s[i]);
			else if(s[i]>='a' && s[i]<='z')
				ans+=s[i];
			else if(s[i]==')'){
				while(a.top()!='('){
					ans+=a.top();
					a.pop();
				}
				a.pop();
			}
		}
		cout<<ans<<endl;
	}
}
