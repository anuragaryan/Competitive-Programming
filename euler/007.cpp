#include<iostream>
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
	int a=1;
	int n=1;
	while(n!=10001)
	{
		a+=2;
		if(isprime(a))
			n++;
	}
	cout<<a<<endl;
}
