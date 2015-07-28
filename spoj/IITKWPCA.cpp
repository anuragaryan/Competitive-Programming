#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s,a="";
		int l;
		getline(cin,s);
		s+=" ";
		if (s==" "){t++; continue;}
		l=s.length();
		set<string> d;
		for(int i=0;i<l;i++){
			if(isalpha(s[i]))
				a+=s[i];
			else if(s[i]==' '&& a!=""){
				if(d.find(a)==d.end())
					d.insert(a);
				a="";
			}
		}
		cout<<d.size()<<endl;
		d.clear();
	}
}
