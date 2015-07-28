#include<iostream>
using namespace std;
int * factorial(int n)
{
	static int a[200];
	int m,i,j,temp,x;
	a[0]=1;  //initializes array with only 1 digit, the digit 1.
	m=1;    // initializes digit counter

	temp = 0; //Initializes carry variable to 0.
	for(i=1;i<=n;i++)
	{
		for(j=0;j<m;j++)
		{
			x = a[j]*i+temp; //x contains the digit by digit product
			a[j]=x%10; //Contains the digit to store in position j
			temp = x/10; //Contains the carry value that will be stored on later indexes
		}
		while(temp>0) //while loop that will store the carry value on array.
		{ 
			a[m]=temp%10;
			temp = temp/10;
			m++; // increments digit counter
		}
	}
	return(a);
}
int main()
{
	for(int i=0;i<25;i++)
	cout<<*factorial(i)<<endl;
}

