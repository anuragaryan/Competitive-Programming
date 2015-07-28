#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int flag=0,l;
	getline(cin,s);
	l=s.length();
	int c[26]={0};
	for(int i=0;i<l;i++)
		c[tolower(s[i])- 'a']++;
	for(int i=0;i<26;i++)
		if(c[i]==0){
			cout<<"not pangram"<<endl;
			flag=1;
			break;
		}
	if(flag==0)
		cout<<"pangram"<<endl;
}
