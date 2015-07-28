#include<iostream>
#include<algorithm>
using namespace std;
int cmp(int a,int b){
	return a>b;
}
int main(){
	int t,s;
	cin>>t;
	s=1;
	while(t--){
		int m,n,sum=0;
		cin>>m>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(&a[0],&a[n],cmp);
		int i=0;
		while(sum<m && i<n){
			sum+=a[i];
			++i;
		}
		cout<<"Scenario #"<<s<<":"<<endl;
		if(sum<m) cout<<"impossible"<<endl;
		else cout<<i<<endl;
		cout<<endl;
		++s;
	}
}
