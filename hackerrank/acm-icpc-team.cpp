#include<cstdio>
#include<vector>
#include<bitset>
#include<string>
#include<iostream>
using namespace std;
//char str[1010];
string str;
vector<bitset<1000> >v;
int main()
{
int n, m;
scanf("%d%d", &n, &m);
getchar();
for (int i = 0; i < n; i++)
{
cin>>str;
bitset<1000> b (str);
v.push_back(b);
}
int best = 0, cnt = 0;
for (int i = 0; i < n; i++)
{
for (int j = i + 1; j < n; j++)
{
bitset<1000> t = v[i] | v[j];
if (t.count() > best) best = t.count(), cnt = 1;
else if (t.count() == best) cnt++;
}
}
printf("%d\n", best);
printf("%d\n", cnt);
return 0;
}
