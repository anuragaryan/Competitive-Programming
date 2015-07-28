/*
ID: me44
PROG: friday
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
bool leap(int n)
{
	if(n%400==0 || (n%4==0 && n%100 !=0))
		return true;
	else
	return false;
}
int main() {
	int w=0,n,day[7]={0};
	int dayinmonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
	fin>>n;
	for (int i=1900; i<1900+n;i++){
		if(leap(i)) dayinmonth[1]=29;
		for(int month=0;month<12;month++){
			for(int d=1;d<=dayinmonth[month];d++){
				if(w==6)
					w=0;
				else
					w+=1;
				if(d==13)
					day[w]+=1;
			}
		}
		dayinmonth[1]=28;
	}
	for(int i=0;i<6;i++)
		fout<<day[(i+6)%7]<<' ';
	fout<<day[5]<<endl;

    return 0;
}
