/*
ID: me44
PROG: ride
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a, b;
	int ma=1,mb=1,la,lb;
    fin >> a >> b;
	la=a.length();
	lb=b.length();
	for(int i=0;i<la;i++)
		ma=ma*((int)(a[i])-64);
	for(int i=0;i<lb;i++)
		mb=mb*((int)(b[i])-64);
	if(ma%47==mb%47)
		fout<<"GO"<<endl;
	else
		fout << "STAY" << endl;
    return 0;
}
