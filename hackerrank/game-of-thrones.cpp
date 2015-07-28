#include<iostream>
#include<string>
using namespace std;
int main()
{
	int count[26]={0};
	int flag=0;
	string s;
	cin>>s;
	int x=0,l;
	l=s.length();
	for (int i=0;i<l;i++)
	{
		count[s[i]-'a']++;
		//cout<<s[i]<<" "<<count[s[i]-'a']<<endl;
	}
	for(int i=0;i<26;i++)
		if(count[i]%2!=0)
			flag++;
	//cout<<flag<<endl;
	if(flag<2)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
