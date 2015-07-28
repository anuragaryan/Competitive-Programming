#include<iostream>
#include<cmath>
#include<map>
using namespace std;
#define i64 long long
map<i64,i64>M;
map<i64,i64>::iterator it;
i64 f(i64 n){
	if(n==0) return 0;
	it=M.find(n);
	if(it==M.end()){
		i64 v= max(n, f(n/2)+f(n/3)+f(n/4));
		M.insert(it,pair<i64,i64>(n,v));
		return v;
	}
	else return (*it).second;
}
int main(){
	i64 n;
	while(cin>>n){
		M.clear();
		cout<<f(n)<<endl;
	}
	return 0;
}
