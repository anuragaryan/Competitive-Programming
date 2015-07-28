#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int i,m,stick=n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(&a[0],&a[n]);
	i=0;
	while(a[i]==0 && i<n-1){
	i++;
	}
	m=a[i];
	//cout<<"first value of m"<<m<<endl;
	while(stick>0)
	{
		stick=0;
		for(int i=0;i<n;i++){
			if(a[i]>0){
				stick++;
			//cout<<stick<<endl;
			a[i]=a[i]-m;
			}
		}
		m=10000;
		for(int i=0;i<n;i++){
			if(a[i]<m && a[i] >0)
				m=a[i];
		}
			if(stick !=0)
			cout<<stick<<endl;
	}
}
