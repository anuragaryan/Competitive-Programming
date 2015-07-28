#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	vector<int>a;
	a.push_back(1);
	int x=2;
	while(a.back()<=10e9){
		a.push_back(3*x*(x-1)+1);
		x++;
	}
	while(cin>>n && n){
		if(binary_search(a.begin(),a.end(),n))
			cout<<"Y"<<endl;
		else
			cout<<"N"<<endl;
	}
	return 0;
}
