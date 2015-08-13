#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    while(scanf("%d %d \n", &n, &m)!=EOF){
        vector<int> *loc = new vector<int>[1000005];
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            loc[x].push_back(i);
        }
        for(int i=0;i<m;i++){
            int k,v;
            scanf("%d %d \n",&k,&v);
            if(k<=loc[v].size()){
                printf("%d\n",loc[v][k-1]+1);

            }
            else
                printf("0\n");
        }

    }
    return 0;
}
