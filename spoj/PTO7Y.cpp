#include<iostream>
#include<queue>
#include<stack>
using namespace std;
#define MAX 10001
int N,E;
vector<int>G[MAX];
bool flag[MAX];
int pre[MAX];
bool bfs(int s){
	int u,v,sz;
	queue<int>Q;
	Q.push(s);
	flag[s]=1;
	while(!Q.empty()){
		u=Q.front();
		Q.pop();
		sz=G[u].size();
		for(int i=0;i<sz;i++){
			v=G[u][i];
			if(pre[u]!=v && flag[v]) return false;
			else if(!flag[v]){
				pre[v]=u;
				flag[v]=1;
				Q.push(v);
			}
		}
	}
	for(int i=1;i<=N;i++)
		if(!flag[i])
			return false;
	return true;
}
int main(){
	int u,v,s;
	cin>>N>>E;
	for(int i=0;i<E;i++){
		cin>>u>>v;
		s=u;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	if(E!=N-1) cout<<"NO"<<endl;
	else{
		if(bfs(s)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
