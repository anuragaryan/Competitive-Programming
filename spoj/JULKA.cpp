#include<cstdio>
#include<cstring>
#define MAX 105
char klaudia[MAX], natalia[MAX], total[MAX], diff[MAX];
void calc(){
	int len1=strlen(total);
	int len2=strlen(diff);
	int i,j,a,b,c,k,f;
	char temp[MAX];
	for(i=len1-1, j=len2-1, k=c=0; i>=0 || j>=0 ||c; i--, j--, k++){
		a=(i>=0)?total[i]-'0' : 0;
		b=(j>=0)?diff[j]-'0' : 0;
		temp[k]=(a+b+c)%10 + '0';
		c=(a+b+c)/10;
	}
	temp[k]=0;
	strcpy(klaudia,"0");
	j=0,f=0,a=0;
	for(i=k-1;i>=0;i--){
		b=(a*10 + temp[i]-'0')/2;
		a=(a*10 + temp[i]-'0')%2;
		if(b) f=1;
		if(f) klaudia[j++]=b+'0';
	}
	if(!j) j++;
	klaudia[j]=0;

	// subtraction
	k=c=0;
	for(i=len1-1, j=len2-1; i>=0; i--,j--,k++){
		a=total[i]-'0';
		b=(j>=0)?diff[j]-'0':0;
		if(a<b+c){
			temp[k]=(10+a-b-c)+'0';
			c=1;
		}
		else{
			temp[k]=a-b-c+'0';
			c=0;
		}
	}
	temp[k]=0;
	strcpy(natalia,"0");
	j=a=f=0;
	for(i=k-1;i>=0;i--){
		b=(a*10 + temp[i]-'0')/2;
		a=(a*10 + temp[i]-'0')%2;
		if(b) f=1;
		if(f) natalia[j++]=b+'0';
	}
	if(!j) j++;
	natalia[j]=0;
}

int main(){
	int t=10;
	while(t--){
		scanf("%s %s",total,diff);
		calc();
		printf("%s\n%s\n",klaudia,natalia);
	}
	return 0;
}
