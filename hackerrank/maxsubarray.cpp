#include<iostream>
#include<cmath>
using namespace std;
int csum(int a[],int l)
{
	int current_sum=0;
	int best_sum=0,val;
	for(int i=0;i<l;i++){
		val=current_sum+a[i];
		if(val>0)
			current_sum=val;
		else
			current_sum=0;
		if(current_sum>best_sum){
			best_sum=current_sum;
		}
	}
	return best_sum;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,nsum=0,cs;
		cin>>n;
		int a[n],big=-99999;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>0)
				nsum+=a[i];
			if(a[i]>big)
				big=a[i];
		}
		cs=csum(a,n);
		if(cs==0)
			cs=big;
		if(nsum==0)
			nsum=big;
		cout<<cs<<" "<<nsum<<endl;
	}
}
