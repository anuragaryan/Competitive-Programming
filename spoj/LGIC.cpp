#include<iostream>
using namespace std;
int main()
{
	int a[20],n;
	long long f=1;
	a[0]=1;
	for (int i=1;i<20;i++)
	{
		a[i]=(a[i-1]*2)+i-1;
	}
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		f=f*i;
	}
	cout<<f+a[n-1]<<endl;
}
