#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int cost[n];
	for(int i=0;i<n;i++)
		cin>>cost[i];
	sort(&cost[0],&cost[n]);
	long long sum=0;
	int i=0;
	while(sum<=k){
		sum+=cost[i];
		i++;
	}
	cout<<i-1<<endl;
}
