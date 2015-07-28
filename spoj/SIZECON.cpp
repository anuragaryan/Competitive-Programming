#include<iostream>
main()
{
	int t,n,s=0;
	for(std::cin>>t;t;std::cin>>n, --t, n>0?s+=n:s);
	std::cout<<s;
}
