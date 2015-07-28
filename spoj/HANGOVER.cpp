#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double n;
	while(cin>>n && n!=0.0){
		double i=1,sum=0;
		while(sum<n){
			sum+=(1.0/++i);
		}
		cout<<i-1<<" card(s)"<<endl;
	}
}
