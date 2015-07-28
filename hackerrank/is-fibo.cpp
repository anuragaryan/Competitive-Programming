#include<iostream>
using namespace std;
int isfib(unsigned long long n,int a){
	unsigned long long f[a];
	f[0]=0,f[1]=1;
	if(n==0 || n==1){
		cout<<"IsFibo"<<endl;
		return 0;
	}
	else if(n<0){
		cout<<"IsNotFibo"<<endl;
		return 0;
	}
	for(int i=2;i<=a;i++){
		f[i]=f[i-1]+f[i-2];
		if(f[i]==n){
			cout<<"IsFibo"<<endl;
			return 0;
		}
		else if(f[i]>n){
			cout<<"IsNotFibo"<<endl;
			return 0;
		}
	}
	return 0;
}
int main(){
	int t;
	unsigned long long n;
	cin>>t;
	while(t--){
		cin>>n;
		isfib(n,100);
	}
}
