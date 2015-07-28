#include<iostream>
using namespace std;
int main()
{
	int v,n;
	cin>>v;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
		if(ar[i]==v)
			cout<<i<<endl;
	}
	return 0;
}
