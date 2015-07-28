#include<iostream>
using namespace std;
int main()
{
	int t;
	unsigned long long n,c,can,a;
	cin>>t;
	while(t--)
	{
		cin>>n;
		can=0;
		a=n;
		while(a--)
		{
			cin>>c;
			can+=c;
			//cout<<can<<endl;
			if(can>=n)
				can=can%n;
		}
		if(can%n==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}

