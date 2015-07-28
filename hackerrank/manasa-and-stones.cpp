#include<iostream>
#include<vector>
#include<algorithm>

bool myfunction (int i,int j) { return (i<j); }

using namespace std;
int main(){
	int t,n,a,b,tmp,l;
	vector<int>ans;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>a;
		cin>>b;
		ans.clear();
		for(int i=0;i<n;i++){
			tmp=(i*b)+((n-i-1)*a);
			if(!(binary_search (ans.begin(), ans.end(), tmp, myfunction)))
				ans.push_back(tmp);
		}
		l=ans.size();
		sort(&ans[0],&ans[l]);
		for(int i=0;i<l;i--)
			cout<<ans[i]<<" ";
		cout<<endl;
	}
}
