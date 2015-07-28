#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int G,B;
	float l,s;
	while(cin>>G && cin>>B && G!=-1 && B!=-1){
		if(G>B){ l=G; s=B; }
		else { l=B; s=G; }
		//cout<<l<<" "<<s<<endl;
		cout<<ceil(l/(s+1))<<endl;
	}
}
