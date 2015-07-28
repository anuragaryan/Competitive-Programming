#include<iostream>
using namespace std;
int main()
{
	float n=100;
	float sum=n*(n+1)/2;
	float sumsq=sum*sum;
	float sqsum=n*(n+1)*(2*n+1)/6;
	cout.precision(15);
	cout<<sumsq-sqsum<<endl;
}
