#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,k,min=999999999;
	cin>>n;
	cin>>k;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(&a[0],&a[n]);
	for(int i=0;i<=n-k;i++)
	{
		if(min>(a[i+k-1]-a[i]))
			min=a[i+k-1]-a[i];
	}
	cout<<min<<endl;
}
