#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)==1){
        int ones=1, count=1;
        while((ones=ones%n)!=0){
            (ones*=10)++;
            ++count;
        }
        printf("%d\n",count);
    }
    return 0;
}
