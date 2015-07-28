#include<iostream>
using namespace std;
int main()
{
	int n,t,a,b;
	cin>>n>>t;
	int width[n];
	for(int i=0;i<n;i++)
		cin>>width[i];
	while(t--)
	{
		cin>>a>>b;
		int r=3;
		for(int i=a;i<=b;i++)
			r=min(r,width[i]);
		cout<<r<<endl;
	}
}
