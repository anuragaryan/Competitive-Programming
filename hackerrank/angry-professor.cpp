#include<iostream>
using namespace std;
int main()
{
	int t,num,n,k,a;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		num=0;
		while(n--)
		{
			cin>>a;
			if(a<=0)
				num++;
		}
			if(num<k)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
