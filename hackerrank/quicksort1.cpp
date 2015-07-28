#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main()
{
	int n,p;
	scanf("%d",&n);
	int ar[n];
	for(int i=0;i<n;i++)
		scanf("%d",&ar[i]);
	p=ar[0];
	vector <int> left;
	vector<int>right;
	for(int i=1;i<n;i++)
			if(ar[i]<=p)
				left.push_back(ar[i]);
			else
				right.push_back(ar[i]);
	for(int i=0;i<left.size();i++)
		printf("%d ",left[i]);
	printf("%d ",p);
	for(int i=0;i<right.size();i++)
		printf("%d ",right[i]);
}
