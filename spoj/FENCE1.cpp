#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
#define eps 1e-10
#define pi acos(-1.0)
int main(){
	double n;
	while(cin>>n && n!=0){
		cout<<setprecision(2)<<n*n/2.0/pi+eps<<endl;
	}
	return 0;
}
