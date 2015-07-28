#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n && n!=0){
		int a[n],b[n],flag=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[a[i]-1]=i+1;
		}
		for(int i=0;i<n;i++)
			if(a[i]!=b[i]) flag=1;
		if(flag) cout<<"not ambiguous"<<endl;
		else cout<<"ambiguous"<<endl;
	}
}
