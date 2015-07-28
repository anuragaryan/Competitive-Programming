#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n],b[m],c[m];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
		cin>>b[i];
	for(int i=0;i<m;i++)
		cin>>c[i];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++){
			if(j%b[i]==0){
				a[j]=a[j]*c[i];
			}
		}
	for(int i=0;i<n;i++)
		cout<<a[i]%(1000000009)<<" ";
}
