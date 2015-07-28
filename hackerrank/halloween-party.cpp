#include<iostream>
using namespace std;
int main()
{
	int t;
	unsigned long long k,ans;
	cin>>t;
	while(t--){
		cin>>k;
		ans=(k/2)*(k-(k/2));
		cout<<ans<<endl;
	}
}
