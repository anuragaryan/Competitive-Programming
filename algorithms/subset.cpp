#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    for(int subset=0; subset< (1<<n); subset++){
        for(int i=0;i<n;i++)
            if((subset & (1<<i))!=0)
                cout<<i+1;
        cout<<endl;

    }
}
