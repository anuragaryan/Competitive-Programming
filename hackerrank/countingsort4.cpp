#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	pair<int,string>a[n];
	int count[100];
	for(int i=0;i<n;i++){
		cin>>a[i].first>>a[i].second;
		if(i<n/2)
			a[i].second="-";
		count[a[i].first]++;
	}
	//int total=0;
	//for(int i=0;i<100;i++){
		//int tmp=count[i];
		//count[i]=total;
		//total+=tmp;
	//}
	pair<int,string>s[n];
	for(int i=0;i<n;i++){
		//s[i]=a[i];
		s[count[a[i].first]]=a[i];
		count[a[i].first]++;
	}
	for(int i=0;i<n;i++)
		cout<<s[i].second<<" ";
	cout<<endl;
}
