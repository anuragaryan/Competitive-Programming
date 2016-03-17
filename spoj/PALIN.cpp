#include<iostream>
#include<string>
using namespace std;
string s;
void pal(int right,int left){
	int i,j,k,carry=1,a;
	for(i=right-1, k=left+1; i>=0 || carry ; i--, k++){
		a=(i>=0)?s[i]-'0':0;
		s[k]=(a+carry)%10+'0';
		carry=(a+carry)/10;
	}
	s[k]=0;
	for(i=0, j=k-1; i<j; i++,j--) s[i]=s[j];
    if(s[s.length()-1]=='0') s+="1";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int l,odd,right,left,flag=0;
		cin>>s;
        if(s=="9"){
            cout<<"11"<<endl;
            continue;
        }
		l=s.length();
		odd=(l&1)?1:0;
		right=(l+1)/2;
		left=(l-1)/2;
		left= odd? left-1: left;
		for(int i=left, j=right; i>=0 && j<l; i--, j++){
			if(s[i]>s[j] || flag){
				s[j]=s[i];
				flag=1;
			}
			else if(s[i]==s[j]) continue;
			else{
				flag=0;
				break;
			}
		}
        if(!flag) pal(right,left);
		cout<<s<<endl;
	}
	return 0;
}
