#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n, sum=0;
		cin>>n;
		sum=3*((n*(n+1))/2)-n;
		if(sum >= 1000007) sum=(sum % 1000007);
		cout<<sum<<endl;
	}
	return 0;
}
