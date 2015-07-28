#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n],count[100]={0};
	for(int i=0;i<n;i++){
		cin>>ar[i];
		count[ar[i]]++;
	}
	int j=0;
	while(j<100)
		if(count[j]){
			cout<<j<<" ";
			count[j]--;
		}
		else
			j++;
}

