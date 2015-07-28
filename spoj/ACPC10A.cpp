#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	while(cin>>a>>b>>c && (a || b || c))
	{
		if (c-b==b-a)
			cout<<"AP "<<c+c-b<<endl;
		else
			cout<<"GP "<<c*c/b<<endl;
	}
}
