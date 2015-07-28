#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i,j,sol=n;
	for(i=2;i<=n;++i){
		for(j=i;j<n;++j){
			if(i*j>n) break;
			++sol;
		}
	}
	cout<<sol<<endl;
	return 0;
}
