#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool compare(char a, char b)
{
	return (int)a < (int)b;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string w;
		int flag=0;
		cin>>w;
		char temp[101];
		int l=w.length();
		for(int i=0;i<l;i++)
			temp[i]=w[i];
		if(next_permutation(&temp[0],&temp[l], compare)){
			for(int i=0;i<l;i++)
				cout<<temp[i];
			cout<<endl;
		}
		else
			cout<<"no answer"<<endl;
	}
}

