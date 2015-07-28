#include<iostream>
#include<set>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	set<int>seen;
	while(n!=1 && seen.find(n)==seen.end()){
		seen.insert(n);
		m=n;
		n=0;
		while(m>0){
			n+=(m%10)*(m%10);
			m/=10;
		}
	}
	if(n==1) cout<<seen.size()<<endl;
	else cout<<-1<<endl;
	return 0;
}
