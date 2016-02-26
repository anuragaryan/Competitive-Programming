#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count=1;
    while(t--){
        int n;
        cin>>n;
        cout<<"Case "<<count<<": "<<4*n*n+0.25<<endl;
        count++;
    }
    return 0;
}
