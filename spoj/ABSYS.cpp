#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int number( const string &Text )
{
	stringstream ss(Text);
	int result;
	return ss >> result ? result : 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b,c;
		char m,n;
		cin>>a>>m>>b>>n>>c;
		if(a.find("machula")!=string::npos)
			cout<<number(c)-number(b)<<" "<<m<<" "<<b<<" "<<n<<" "<<c<<endl;
		else if(b.find("machula")!=string::npos)
			cout<<a<<" "<<m<<" "<<number(c)-number(a)<<" "<<n<<" "<<c<<endl;
		else if(c.find("machula")!=string::npos)
			cout<<a<<" "<<m<<" "<<b<<" "<<n<<" "<<number(a)+number(b)<<endl;
		else
			cout<<a<<" "<<m<<" "<<b<<" "<<n<<" "<<c<<endl;
	}
}
