#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n],count[100]={0};
	string str;
	for(int i=0;i<n;i++){
		cin>>ar[i]>>str;
		count[ar[i]]++;
	}
	int sum=0;
	for(int i=0;i<100;i++){
		sum+=count[i];
		cout<<sum<<" ";
	}
}
