#include<iostream>
using namespace std;
int main(){
	unsigned long long m,a,b,k;
	unsigned long long n,total=0,avg=0;
	cin>>n>>m;
	while(m--){
		cin>>a>>b>>k;
		total+=((b-a+1)*k);
		avg+=(total/n);
		total%=n;
	}
	cout<<avg<<endl;
}
