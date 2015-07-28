#include<iostream>
#include<cmath>
using namespace std;
int isprime(int n)
{
	for (int i=2;i<n;i++)
		if (n%i==0)
			return 0;
	return 1;
}
int main()
{
	int k=20,N=1,i=1,j=1;
	int a[20]={0},p[20];
	fill_n(p, 20, 25);
	for (int i=1;i<20;i++)
	{
		if(isprime(i))
		{
			p[j]=i;
			j++;
		}
	}
	i=1;
	bool check=true;
	double limit=sqrt(k);
	while (p[i]<=k)
	{
		a[i]=1;
		if(check)
			if (p[i]<=limit)
				a[i]=log(k)/log(p[i]);
			else
				check=false;
		N=N*pow(p[i],a[i]);
		i=i+1;
	}
	cout<<N<<endl;
}
