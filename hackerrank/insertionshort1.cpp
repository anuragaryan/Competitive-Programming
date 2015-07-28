#include<iostream>
using namespace std;
int main()
{
	int s,v;
	cin>>s;
	int ar[s];
	for(int i=0;i<s;i++)
		cin>>ar[i];
	v=ar[s-1];
	for(int i=s-2;i>=0;i--)
	{
		if(ar[i]>v){
			ar[i+1]=ar[i];}
		else
			ar[i+1]=v;
		for(int i=0;i<s;i++)
			cout<<ar[i]<<" ";
		cout<<endl;
	}
}
