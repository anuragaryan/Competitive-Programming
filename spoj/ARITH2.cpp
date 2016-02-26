#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char op;
        long long res;
        cin>>res>>op;
        while(op!= '='){
            cin>>n;
            switch(op){
                case '+': res+=n;
                          break;
                case '-':res -= n;
                         break;
                case '*':res *=n;
                         break;
                case '/':res /=n;
            }
            cin>>op;
        }
        cout<<res<<endl;
    }
    return 0;
}
