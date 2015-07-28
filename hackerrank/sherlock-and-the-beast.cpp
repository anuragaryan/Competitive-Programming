#include<iostream>
using namespace std;
int main(){
	int t,n,i;
	cin>>t;
	while(t--){
		cin>>n;
		for(i=n;i>=0;i--){
			if(i%3==0 && (n-i)%5==0)
				break;
		}
		if(i%3!=0 || (n-i)%5!=0){
			cout<<"-1"<<endl;
			continue;
		}
		for(int j=0;j<n;j++){
			if(i-j>0){
				cout<<"5";
			}
			else
			cout<<"3";
		}
		cout<<endl;
	}
}
