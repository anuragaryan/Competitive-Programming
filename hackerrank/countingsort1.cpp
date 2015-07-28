#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n],count[100]={0};
	for(int i=0;i<n;i++){
		cin>>ar[i];
		count[ar[i]]++;
	}
	for(int i=0;i<100;i++)
		cout<<count[i]<<" ";
}
