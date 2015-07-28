#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
bool visited[100005];
vector< vector <int> > adj(100005);
int n;
void dfs(int i){
	if(visited[i])
		return;
	visited[i]=1;
	vector<int>::iterator it;
	for(it=adj[i].begin();it!=adj[i].end();it++){
		if(!visited[*it])
			dfs(*it);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int e,x,y,ans=0;
		cin>>n;
		cin>>e;
		memset(visited,0,sizeof(visited));
		for(int i=0;i<n;i++)
			adj[i].clear();
		for(int i=0;i<e;i++){
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		for(int i=0;i<n;i++){
			if(!visited[i]){
				ans++;
				//cout<<ans<<" "<<i<<endl;
				dfs(i);
			}
		}
		cout<<ans<<endl;
	}
}
