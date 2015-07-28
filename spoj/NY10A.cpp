#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
	int p;
	cin>>p;
	while(p--){
		int n;
		string s;
		map<string, int>M;
		cin>>n;
		cin>>s;
		for(int i=0;i<s.length()-2;i++){
			M[s.substr(i,3)]++;
		}
		cout<<n<<" "<<M["TTT"]<<" "<<M["TTH"]<<" "<<M["THT"]<<" "<<M["THH"]<<" "<<M["HTT"]<<" "<<M["HTH"]<<" "<<M["HHT"]<<" "<<M["HHH"]<<endl;
	}
	return 0;
}
