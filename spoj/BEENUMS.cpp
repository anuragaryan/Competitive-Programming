#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	long long n;
	vector<long long>a;
	a.push_back(1);
	int x=2;
	while(a.back()<=1000000000){
		a.push_back(3*x*(x-1)+1);
		x++;
	}
	while(cin>>n && n>0){
		if(binary_search(a.begin(),a.end(),n))
			cout<<"Y"<<endl;
		else
			cout<<"N"<<endl;
	}
	return 0;
}
