#include<iostream>
#include<string>
using namespace std;
int main(){
    int p[3]={0};
    string choice;
    cin>>choice;
    //for policy 1
    for(int i=1;i<choice.length();i++){
        if(choice[i]=='D')
            p[0]+=2;
    }
    if(choice[0]=='D' && choice[1]=='D')
        p[0]--;
    else if(choice[0]=='D' && choice[1]=='U')
        p[0]++;
    //for policy 2
    for(int i=1;i<choice.length();i++){
        if(choice[i]=='U')
            p[1]+=2;
    }
    if(choice[0]=='U' && choice[1]=='U')
        p[1]--;
    else if(choice[0]=='U' && choice[1]=='D')
        p[1]++;
    //for policy 3
    for(int i=1;i<choice.length();i++)
        if(choice[i]!=choice[i-1])
            p[2]++;
    cout<<p[0]<<endl<<p[1]<<endl<<p[2]<<endl;
    return 0;
}
