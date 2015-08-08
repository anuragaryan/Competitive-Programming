#include <iostream>
#include <string>
using namespace std;

string keys[12] = {
    "", "abc", "def",
    "ghi", "jkl", "mno",
    "pqrs", "tuv", "wxyz",
    "", " ", ""
};

int main() {
    int t,i=0;
    cin>>t;
    string x;
    getline(cin,x);
    while(t--){
        i++;
        string line;
        int cnt,last=-1,d;
        getline(cin, line);
        cout<<"Case #"<<i<<": ";
        for (int i = 0; i < line.size(); i++) {
            for (int j = 0; j < 12; j++) {
                for (int k = 0; k < keys[j].size(); k++) {
                    if (line[i] == keys[j][k]) {
                        cnt=k+1;
                        if(j==10) d=0;
                        else d=j+1;
                        if(last==d) cout<<" ";
                        //cout<<cnt<<"times"<<d<<endl;
                        while(cnt--){cout<<d;}
                        last=d;
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
