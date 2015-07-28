#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		if(s=="0" || s=="1")
			cout<<s<<endl;
		else{
			int i,l,carry=0,a;
			l=s.length();
			reverse(s.begin(),s.end());
			for(i=0;i<l || carry; i++){
				a=(i<l)?s[i]-'0':0;
				s[i]=(a*2+carry)%10+'0';
				carry=(a*2+carry)/10;
			}
			s[i]=0;
			l=i;
			i=carry=0;
			a=s[0]-'0';
			if(a<2){
				s[i++]=10+a-2+'0';
				carry=1;
			}
			else{
				s[i++]=a-2+'0';
				carry=0;
			}
			for(i=1;i<l;i++){
				a=s[i]-'0';
				if(a<carry){
					s[i]=a+10-carry+'0';
					carry=1;
				}
				else{
					s[i]=a-carry+'0';
					carry=0;
				}
			}
			for(--i;i>0;i--){
				if(s[i]=='0') s[i]=0;
				else break;
			}
			l=i+1;
			reverse(&s[0],&s[l]);
			cout<<s<<endl;
		}
	}
	return 0;
}
