#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		int c[n];
		for(int i=0;i<n;i++)
			cin>>c[i];
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
			{
				if(c[i] == m-c[j]){
					cout<<i+1<<" "<<j+1<<endl;
					break;
				}
			}
	}
}
