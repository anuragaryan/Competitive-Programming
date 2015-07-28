#include <iostream>
#include <vector>
#define f(i,n) for (i=0;i<n;i++)
using namespace std;
class eventree
{
	struct treenode
	{
		int index,Nocon;
		vector <int> conV;
		treenode (int i):index(i),Nocon(0){}
	};
	vector<treenode> tree;
	vector<pair<int,int> > b;
	vector<vector<int> > con;
	public :
	void addconnection(int a ,int b)
	{
		tree[a].Nocon+=1;
		tree[b].Nocon+=1;
		tree[a].conV.push_back(b);
		tree[b].conV.push_back(a);
	}
	eventree (vector<pair<int,int> > v, int n)
	{
		tree.clear();
		con.clear();
		int j,i,s= v.size();
		vector<int> a;
		a.clear();
		f(i,n)
		{
			a.push_back(-1);
		}
		f(i,n)
		{
			con.push_back(a);
		}
		f(i,n)
		{
			treenode T(i);
			tree.push_back(T);
		}
		f(i,s)
		{
			addconnection(v[i].first,v[i].second);
		}
		b.clear();
		b=v;
	}
	int getconnections(int a , int b)
	{
		int i,sum=0,s=tree[a].Nocon;
		if(s==1) return 1;
		f(i,s)
		{
			if (tree[a].conV[i] != b) sum+=getconnections(tree[a].conV[i],a);
		}
		return sum+1;
	}
	int res()
	{
		int cnt=0,i,a,s=b.size();
		f(i,s)
		{
			a=getconnections(b[i].first,b[i].second);
			if (a%2==0) cnt++;
		}
		return cnt;
	}
};
int main()
{
	int a,b,M,N,i;
	cin>>N>>M;
	vector<pair<int,int> >v;
	v.clear();
	f(i,M)
	{
		cin>>a>>b;
		v.push_back(make_pair(a-1,b-1));
	}
	eventree e(v,N);
	cout<<e.res();
	return 0;
}
