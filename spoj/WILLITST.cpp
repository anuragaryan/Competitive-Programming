#include<iostream>
using namespace std;
int main(){
	unsigned long long n;
	cin>>n;
	if ((n&(n-1))==0) cout<<"TAK"<<endl;
	else cout<<"NIE"<<endl;
	return 0;
}
