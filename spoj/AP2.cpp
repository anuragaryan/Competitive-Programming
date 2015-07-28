#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long f,l,sum,n,d,a;
		cin>>f>>l>>sum;
		n=2*sum/(f+l);
		d=(l-f)/(n-5);
		a=f-2*d;
		cout<<n<<endl;
		for(int i=0;i<n;i++)
			cout<<a+i*d<<" ";
		cout<<endl;
	}
}
