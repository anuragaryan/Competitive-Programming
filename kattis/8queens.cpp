#include<iostream>
#include<string>
using namespace std;
int main(){
    bool flag=true;
    int queen=0;
    string row[8];
    for(int i=0;i<8;i++)
        cin>>row[i];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(row[i][j]=='*'){
                queen++;
                for(int a=0;a<8;a++){
                    for(int b=0;b<8;b++){
                        if(row[a][b]=='*'&& !(a==i && b==j) && (a==i || b==j || (i-j)==(a-b) || (a+b)==(i+j))){
                            flag=false;
                        }
                    }
                }
            }
        }
    }
    if(flag && queen==8)
        cout<<"valid"<<endl;
    else
        cout<<"invalid"<<endl;
    return 0;
}
