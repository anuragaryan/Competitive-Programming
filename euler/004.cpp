#include<iostream>
using namespace std;
int ispallindrome(int n)
{
	int m,a=0,b;
	m=n;
	while(m!=0)
	{
		b=m%10;
		m=m/10;
		a=a*10+b;
	}
	if (n==a)
		return 1;
	else
		return 0;
}
int main()
{
	int m=0;
	for (int i=999;i>99;i--)
		for (int j=i;j>99;j--)
			if(ispallindrome(i*j) && i*j>m)
				m=i*j;
	cout<<m<<endl;
}

