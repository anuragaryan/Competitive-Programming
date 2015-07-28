#include<iostream>
using namespace std;
int main()
{
	int a=1,b=1,c=0,sum=0;
	while (c<4000000)
	{
		if(c%2==0)
			sum=sum+c;
		c=a+b;
		a=b;
		b=c;
	}
	cout<<sum<<endl;
}
