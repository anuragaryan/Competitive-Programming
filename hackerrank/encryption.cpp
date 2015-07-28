#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	string s;
	int l,rows,cols,a;
	cin>>s;
	l=s.length();
	rows=floor(sqrt(l));
	cols=ceil(sqrt(l));
	if(rows*cols <l)
		rows+=1;
	//cout<<l<<" "<<rows<<" "<<cols<<endl;
	for(int i=0;i<cols;i++){
		a=i;
		while(a<l){
			cout<<s[a];
			a+=cols;
		}
		cout<<" ";
	}
}
