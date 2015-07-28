#include<iostream>
#include<stack>
using namespace std;
int main(){
	int n;
	while(cin>>n && n!=0){
		int a[n],tmp=1,i,flag=0;
		stack<int>s;
		s.push(10000);
		for(i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==tmp)
				tmp++;
			else if(a[i]<s.top())
				s.push(a[i]);
			else{
				break;
				flag=1;
			}
		}
		while(flag!=1 && s.top()!=10000){
			if(tmp==s.top()){
				s.pop();
				tmp++;
			}
		}
		if(flag==0 && s.top()==10000)
			cout<<"yes"<<endl;
		else if(flag ==1)
			cout<<"no"<<endl;
	}
}
