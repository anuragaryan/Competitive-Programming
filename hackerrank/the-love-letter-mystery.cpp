#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int t,l,m;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		l=s.length();
		m=0;
		for(int i=0;i<l/2;i++)
		{
			if(s[i]!=s[l-i-1])
				m+=abs((int)(s[i])-(int)(s[l-i-1]));
		}
		cout<<m<<endl;
	}
}
