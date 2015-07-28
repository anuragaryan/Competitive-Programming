#include<iostream>
using namespace std;
int main()
{
	int t,c,a;
	unsigned long long n,m;
	cin>>t;
	while(t--){
		c=0;
		cin>>n;
		m=n;
		while(m>0){
			a=m%10;
			if(a!=0)
				n%a==0?c++:c;
			m=m/10;
		}
		cout<<c<<endl;
	}
}

