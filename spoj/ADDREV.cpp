#include<iostream>
using namespace std;
int rev(int n)
{
	int r,a=0;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		a=a*10+r;
	}
	return a;
}
int main()
{
	int n,a,b;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		cout<<rev(rev(a)+rev(b))<<endl;
	}
}
