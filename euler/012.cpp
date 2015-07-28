#include<iostream>
#include<cmath>
using namespace std;
int factor(int n)
{
	int f=0;
	for(int i=1;i<sqrt(n);i++)
	{
		if(n%i==0)
			f++;
	}
	return(f*2);
}
int main()
{
	int a=1,s=0,f=0;
	while(f<=500)
	{
		s=s+a;
		f=factor(s);
		a++;
	}
	cout<<s<<endl;
}
