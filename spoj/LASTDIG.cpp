#include<iostream>
using namespace std;
int main(){
	int a,b,t,table[10][4];
	for(int i=0;i<10;i++)
		for(int j=table[i][0]=1;j<=4;j++)
			table[i][j&3]=(table[i][j-1]*i)%10;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(!b) cout<<1<<endl;
		else
			cout<<table[a%10][b&3]<<endl;
	}
	return 0;
}
