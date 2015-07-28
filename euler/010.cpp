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
	long long sum=2;
	for(int i=1;i<2000000;i+=2)
		if(isprime(i))
			sum=sum+i;
	cout<<sum<<endl;
}
