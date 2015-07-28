#include<iostream>
#include<cmath>
using namespace std;
int isprime(int n){
	if(n<=1) return 0;
	if(n<=3) return 1;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,count=0,w;
		cin>>n;
		w=(n/4)*2+(n%4);
		for(int i=1;i<=w;i++)
			if(isprime(i))
				count+=1;
		cout<<count<<endl;
	}
}
