#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	string a,b;
	int sum=0,la,lb;
	cin>>a;
	cin>>b;
	int c1[26]={0},c2[26]={0};
	la=a.length();
	lb=b.length();
	for(int i=0;i<la;i++)
		c1[a[i]-'a']++;
	for(int i=0;i<lb;i++)
		c2[b[i]-'a']++;
	for(int i=0;i<26;i++)
		sum+=(abs(c1[i]-c2[i]));
	printf("%d \n", sum);
}

