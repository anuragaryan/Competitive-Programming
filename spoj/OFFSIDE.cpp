#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a,d;
	while(cin>>a && cin>>d && a && d){
		int b[a],c[d];
		for(int i=0;i<a;i++)
			cin>>b[i];
		for(int i=0;i<d;i++)
			cin>>c[i];
		sort(&b[0],&b[a]);
		sort(&c[0],&c[d]);
		//cout<<b[0]<<" "<<c[0]<<" "<<c[1]<<endl;
		if(b[0]>=c[0] && b[0]>=c[1])
			cout<<"N"<<endl;
		else
			cout<<"Y"<<endl;
	}
	return 0;
}
