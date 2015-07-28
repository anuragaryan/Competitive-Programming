#include<iostream>
#include<vector>
using namespace std;
int LIS(vector<int>&D){
	vector< vector<int> >L(D.size());
	L[0].push_back(D[0]);
	int max=0,m;
	for(int i=1;i<D.size();i++){
		for(int j=0;j<i;j++){
			if(D[j]<D[i] && (L[i].size()<L[j].size()+1))
				L[i]=L[j];
		}
	L[i].push_back(D[i]);
	m=L[i].size();
	if(m>max)
		max=m;
	}
	return(max);
}

int main(){
	int n,temp;
	cin>>n;
	vector<int>a;
	for(int i=0;i<n;i++){
		cin>>temp;
		a.push_back(temp);
	}
	cout<<LIS(a)<<endl;
}
