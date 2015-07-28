#include<iostream>
using namespace std;
int choc(int n,int c,int m,int total,int wrap)
{
	total+=n/c;
	wrap+=n/c;
	n=n%c;
	n+=(wrap/m)*c;
	wrap=wrap%m;
	//cout<<n<<" "<<c<< " "<<m<<" "<<total<<endl;
	if(n<c)
		cout<<total<<endl;
	else
		choc(n,c,m,total,wrap);
	return 0;
}

int main()
{
	int t,n,c,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>c>>m;
		choc(n,c,m,0,0);
	}
}
