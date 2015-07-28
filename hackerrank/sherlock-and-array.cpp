#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m;
		int right,left,sum=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		left=0; right=sum; m=-1;
		while(m<n-1){
			m++;
			if(m-1>=0)
			left=left+a[m-1];
			right=right-a[m];
			//cout<<"right= "<<right<<endl<<"left= "<<left<<endl;
			if(right == left){
				cout<<"YES"<<endl;
				break;
			}
			else if(m==n-1)
				cout<<"NO"<<endl;
		}
	}
}
