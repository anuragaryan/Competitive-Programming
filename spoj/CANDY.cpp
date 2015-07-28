#include<iostream>
using namespace std;
int main()
{
	int n[10001],avr,m,t,sum;
	while(cin>>t && t!=-1)
	{
		sum=0;
		m=0;
		for(int i=0;i<t;i++)
		{
			cin>>n[i];
			sum=sum+n[i];
		}
		if(sum%t ==0)
		{
			avr=sum/t;
			for (int i=0;i<t;i++)
				if(n[i]<avr)
					m+=avr-n[i];
			cout<<m<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}
	}
}

