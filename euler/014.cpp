#include<iostream>
using namespace std;
int collatz(long long n)
{
	int s=0;
	while(n>1)
	{
		(n%2==0)? n=n/2 : n=3*n+1;
		s++;
	}
	return s+1;
}
int main()
{
	long long a;
	int n,s=0;
	for (long long i=1000000;i>1;i--)
	{
		n=collatz(i);
		if(n>s)
		{
			s=n;
			a=i;
			cout<<i<<" "<<n<<endl;
		}
	}
	cout<<a<<endl;
}
