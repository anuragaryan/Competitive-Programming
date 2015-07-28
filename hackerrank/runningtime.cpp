#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int s,n=0;
	scanf("%d",&s);
	int ar[s];
	for(int i=0;i<s;i++)
		scanf("%d",&ar[i]);
	for(int i=1;i<s;i++){
		int j=i;
		while(j>0 && ar[i]<ar[j-1])
			j--;
		int tmp=ar[i];
		for(int k=i;k>j;k--){
			ar[k]=ar[k-1];
			n++;
		}
		ar[j]=tmp;
	}
	printf("%d",n);
}
