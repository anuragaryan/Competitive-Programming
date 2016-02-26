#include<iostream>
using namespace std;
int a[105][105];
int max(int x, int y, int z){
    if(x>y)
        return(x>z)? x : z;
    else
        return (y>z)? y : z;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int h,w,i,j;
        cin>>h>>w;
        for(i=1;i<=h;i++){
            for(j=1;j<=w;j++){
                cin>>a[i][j];
                //cout<<a[i-1][j]<<endl;
            }
            a[i][j]=0;
            for(j=1;j<=w;j++){
                a[i][j]+=max(a[i-1][j-1],a[i-1][j],a[i-1][j+1]);
                //cout<<a[i-1][j-1]<<a[i-1][j]<<a[i-1][j+1]<<endl;
                //cout<<max(a[i-1][j-1],a[i-1][j],a[i-1][j+1])<<endl;
            }
        }
        int res = a[h][1];
        for(i=2;i<=w;i++)
            res=max(res,a[h][i],0);
        cout<<res<<endl;
    }
    return 0;
}
