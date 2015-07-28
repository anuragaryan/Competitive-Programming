#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int n,l,sum=0;
	scanf("%d",&n);
	string s[n];
	int c[100][26]={0};
	for(int i=0;i<n;i++)
		cin>>s[i];
	for(int i=0;i<n;i++){
		l=s[i].length();
		for(int j=0;j<l;j++)
			c[i][s[i][j]-'a']++;
	}
	for(int i=0;i<26;i++){
		int flag=0;
		for(int j=0;j<n;j++){
			if(c[j][i]==0)
				flag=1;
		}
		sum+=(!flag);
	}
	printf("%d \n",sum);
}
