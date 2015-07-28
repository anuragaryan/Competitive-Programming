#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x;
	char a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cin>>a[i][j];
		//cin>>x;
		//for(int j=n-1;j>=0;j--){
			//a[i][j]=(char)(((int)'0')+(x%10));
			//x=x/10;
		//}
	}
	for(int i=1;i<n-1;i++)
		for(int j=1;j<n-1;j++){
			if((int)a[i][j]>(int)a[i-1][j] && (int)a[i][j]>(int)a[i][j-1] && (int)a[i][j]>(int)a[i+1][j] && (int)a[i][j]>(int)a[i][j+1])
				a[i][j]='X';
		}
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cout<<a[i][j];
	}
	cout<<endl;
}
}
