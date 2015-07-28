#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int ispalindrome(string s)
{
	int l=s.length();
	int i;
	for(i=0; (i<l/2) && s[i]==s[l-i-1];i++);
	return(i==l/2);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l=s.length();
		if(ispalindrome(s))
			cout<<-1<<endl;
		else{
			int i=0, j=l-1, ans=-1;
			while(i<j && s[i]==s[j])i++,j--;
			if(i<j){
				string str1=s.substr(0,i)+s.substr(i+1,l-i-1);
				if(ispalindrome(str1)) ans=i;
				else{
					string str2=s.substr(0,j)+s.substr(j+1,l-j-1);
					if(ispalindrome(str2)) ans=j;
				}
			}
			cout<<ans<<endl;
		}
	}
}
