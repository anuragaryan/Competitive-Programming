#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	long long a,b,n;
	cin>>t;
	while(t--){
		n=0;
		cin>>a>>b;
		cout<<(int)(floor(sqrt(b))-ceil(sqrt(a))+1)<<endl;
	}
}
