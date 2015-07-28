#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,sum,m[1001],f[1001];
	cin>>t;
	while(t--)
	{
		cin>>n;
		sum=0;
		for(int i=0;i<n;i++)
			cin>>m[i];
		for (int i=0;i<n;i++)
			cin>>f[i];
		sort(&m[0],&m[n]);
		sort(&f[0],&f[n]);
		for (int i=0;i<n;i++)
			sum+=m[i]*f[i];
		cout<<sum<<endl;
	}
}
