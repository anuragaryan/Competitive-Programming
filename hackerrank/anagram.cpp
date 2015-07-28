#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		string s;
		int l;
		cin>>s;
		l=s.length();
		if(l%2!=0)
			printf("-1 \n");
		else{
			int sum=0;
			int c1[26]={0},c2[26]={0};
			for(int i=0;i<l/2;i++)
				c1[s[i]-'a']++;
			for(int i=l/2;i<l;i++)
				c2[s[i]-'a']++;
			for(int i=0;i<26;i++)
				sum+=(abs(c1[i]-c2[i]));
			printf("%d \n",sum/2);
		}
	}
}
