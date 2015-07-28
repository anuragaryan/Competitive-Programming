#include<iostream>
using namespace std;
int main()
{
	int t,n,z=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		while(n)
		{
			z+=n/5;
			n/=5;
		}
		cout<<z<<endl;
		z=0;
	}
}

