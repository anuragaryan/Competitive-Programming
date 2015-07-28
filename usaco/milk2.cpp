/*
ID: me44
PROG: milk2
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include<algorithm>

using namespace std;

int cmp(int a,int b){
    return a < b;
}

int main() {
	int n;
    ofstream fout ("milk2.out");
    ifstream fin ("milk2.in");
	fin>>n;
	long long b[n][2],m=0,milk,g,gap;
	for(int i=0;i<n;i++)
		fin>>b[i][0]>>b[i][1];
	sort(&b[0][0],&b[n][0],cmp);
	milk=b[0][1]-b[0][0];
	m=milk;
	gap=0;
	for(int i=1;i<n;i++)
	{
		if(b[i][0]<b[i-1][1] && b[i][1]>b[i-1][1])
			m=m+(b[i][1]-b[i-1][1]);
		else
			m=0;
		milk=max(milk,m);
	}
	for(int i=1;i<n;i++)
	{
		if(b[i][0]>b[i-1][1])
			g=b[i][0]-b[i-1][1];
		gap=max(gap,g);
	}
	for(int i=0;i<n;i++)
		cout<<b[i][0]<<" "<<b[i][1]<<endl;
	fout<<milk<<' '<<gap<<endl;
    return 0;
}
