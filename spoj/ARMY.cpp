#include<iostream>
#include<algorithm>
using namespace std;
int cmp(int a,int b){
	return a>b;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int ng,nm;
		cin>>ng>>nm;
		int sg[ng],sm[nm];
		for(int i=0;i<ng;i++)
			cin>>sg[i];
		for(int i=0;i<nm;i++)
			cin>>sm[i];
		sort(&sg[0],&sg[ng],cmp);
		sort(&sm[0],&sm[nm],cmp);
		int i=0,j=0;
		while(i<ng && j<nm){
			//cout<<sg[i]<<" "<<sm[j]<<endl;
			if(sg[i]>=sm[j])
				j++;
			else
				i++;
		}
		if(i==ng)
			cout<<"MechaGodzilla"<<endl;
		else if(j==nm)
			cout<<"Godzilla"<<endl;
		else
			cout<<"uncertain"<<endl;
	}
}
