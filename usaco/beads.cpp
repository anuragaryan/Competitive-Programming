/*
ID: me44
PROG: beads
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("beads.out");
    ifstream fin ("beads.in");
    string s;
	int n,ans=0,l,p,c,left,right;
	char tl,tr;
    fin >> n;
	fin>>s;
	l=n;
	for(int i=0;i<l;i++)
	{
		p=i;
		while(s[p]=='w'){
			p++;
			p>l?p=0:p;
		}
		tr=s[p];
		p=i-1;
		p<0?p=l:p;
		while(s[p]=='w'){
			p--;
			p<0?p=l:p;
		}
		tl=s[p];
		p=i;
		c=0;
		left=0;
		while(c==0)
		{
			p--;
			p<0?p=l:p;
			if((s[p]==tl || s[p]=='w') && left<n)
				left+=1;
			else
				c=1;
		}
		c=0;
		p=i;
		right=1;
		while(c==0)
		{
			p++;
			(p>l-1)?p=0:p;
			if((s[p]==tr || s[p]=='w')&& right < n){
				right+=1;
				}
			else c=1;
		}
		ans=max(ans,right+left);
	}
	fout<<(ans>n?n:ans)<<endl;
    return 0;
}
