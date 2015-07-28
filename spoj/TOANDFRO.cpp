#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	char msg[300];
	int c,l,r;
	while(cin>>c && c)
	{
		cin>>s;
		l=s.length();
		r=l/c;
		for(int i=1;i*c<l;i+=2)
			reverse(&s[i*c],&s[i*c]+c);
		int n=0;
		for (int i=0;i<c;i++)
		{
			for(int j=0;j<r;j++)
			{
				msg[n++]=s[c*j+i];
			}
		}
		msg[n]='\0';
		cout<<msg<<endl;
	}
}
