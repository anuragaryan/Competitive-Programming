#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,d,l;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		l=s.length();
		d=0;
		for(int i=0;i<l-1;i++)
		{
			if(s[i]==s[i+1])
				d++;
		}
		cout<<d<<endl;
	}
}
