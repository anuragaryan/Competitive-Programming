#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    while(getline(cin,line)){
        list<char>text;
        list<char>::iterator it=text.begin();
        for(int i=0;i<line.size();i++){
            char c=line[i];
            if(c=='['){
                it=text.begin();
            }
            else if(c==']'){
                it=text.end();
            }
            else{
                text.insert(it,c);
            }
        }
        for(it=text.begin(); it!=text.end();it++){
            printf("%c",*it);
        }
        printf("\n");
    }
    return 0;
}
