#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		unsigned long long n;
		cin>>n;
		cout<<(n*(n+2)*(2*n+1)/8)<<endl;
	}
	return 0;
}
