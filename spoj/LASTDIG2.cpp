#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    int table[10][4];
    for(int i=0;i<10;i++){
        table[i][0]=1*i;
        for(int j=1;j<4;j++){
            table[i][j]=(table[i][j-1]*i)%10;
        }
    }
    //for(int i=0;i<10;i++)
        //cout<<table[i][0]<<" "<<table[i][1]<<" "<<table[i][2]<<" "<<table[i][3]<<endl;
    cin>>t;
    while(t--){
        string d;
        long long e;
        cin>>d>>e;
        if(e==0) cout<<1<<endl;
        else{
            int n=(d[d.length()-1]-'0');
            e=(e%4)-1;
            if(e<0) e=3;
            cout<<table[n][e]<<endl;
        }
    }
    return 0;
}
