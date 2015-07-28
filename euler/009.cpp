#include<iostream>
using namespace std;
int main()
{
	for(int i=1000; i>0; i--)
		for(int j=i;j>0;j--)
			for(int k=j;k>0;k--)
				if(i+j+k==1000 && i*i==j*j+k*k)
				{
					cout<<i*j*k<<endl;
					break;
				}
}
