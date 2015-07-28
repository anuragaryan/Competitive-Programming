#include<iostream>
using namespace std;
int main()
{
	int a,b,n,r,c=0,m;
	while(cin>>a && a && cin>>b)
	{
	int ar[10]={0};
	if (a>b)
	{
		m=a;
		a=b;
		b=m;
	}
		for(int i=a;i<=b;i++)
		{
			n=i;
			while(n>0)
			{
				r=n%10;
				ar[r]++;
				n=n/10;
			}
		}
		c++;
		cout<<"Case "<<c<<":";
		for (int i=0;i<10;i++)
			cout<<' '<<i<<':'<<ar[i];
		cout<<endl;
	}
}

