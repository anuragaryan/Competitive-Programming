#include<bits/stdc++.h>
using namespace std;

const int n=4;
int perm[n];
bool used[n];

void generate(int at){
    if(at==n){
        for(int i=0;i<n;i++){
            cout<<perm[i]+1;
        }
        cout<<endl;
    }
    else{
        //decide what the at-th element should be
        for(int i=0;i<n;i++){
            if(!used[i]){
                used[i]=true;
                perm[at]=i;

                generate(at+1);

                //remember to undo the move:
                used[i]=false;
            }
        }
    }
}

int main(){
    memset(used,0,n);
    generate(0);
}
