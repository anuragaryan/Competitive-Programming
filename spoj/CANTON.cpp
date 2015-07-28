#include<iostream>
#include<cmath>
using namespace std;
#define eps 10e-8
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a=(int)(ceil((sqrt(8*n+1)-1)/2)+eps);
		int sum=a*(a+1)/2;
		int b=sum-n;
		if(a&1) cout<<"TERM "<<n<<" IS "<<1+b<<"/"<<a-b<<endl;
		else  cout<<"TERM "<<n<<" IS "<<a-b<<"/"<<1+b<<endl;
	}
	return 0;
}
