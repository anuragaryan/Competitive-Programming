#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n)
{
	int r,f;
	if (n==1)
		return false;
	else if (n<4)
		return true;
	else if (n%2==0)
		return false;
	else if (n<9)
		return true;
	else if (n%3==0)
		return false;
	else
	{
		r=sqrt(n);
		f=5;
		while(f<=r)
		{
			if (n%f==0)
			{
				return false;
				break;
			}
			if (n%(f+2)==0)
			{
				return false;
				break;
			}
			f=f+6;
		}
	return true;
	}
}
int main()
{
	int t,x,y;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>x>>y;
		for (int j=x;j<=y;j++)
		{
			if(isprime(j))
				cout<<j<<endl;
		}
		cout<<"\n"<<endl;
	}
}
