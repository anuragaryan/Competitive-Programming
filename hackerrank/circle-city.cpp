#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		float r,x;
		int k,c=0;
		cin>>r>>k;
		float l=sqrt(r);
		//cout<<l<<endl;
		for(int i=0;i<l;i++)
		{
			x=sqrt(r-pow(i,2));
			if(x==(int)(x))
				c+=4;
			//cout<<c<<" "<<i<<endl;
			}
		if(sqrt(r)==floor(sqrt(r)))
			c-=4;
		if(c<=k)
			cout<<"possible"<<endl;
		else
			cout<<"impossible"<<endl;
	}
}
