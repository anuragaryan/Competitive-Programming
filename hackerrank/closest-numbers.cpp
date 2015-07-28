#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(&a[0],&a[n]);
	int small=999999999,d;
	for(int i=1;i<n;i++){
		d=a[i]-a[i-1];
		if(d<small)
			small=d;
	}
	for(int i=1;i<n;i++){
		if(a[i]-a[i-1]==small)
			cout<<a[i-1]<<" "<<a[i]<<" ";
	}
	cout<<endl;
}
