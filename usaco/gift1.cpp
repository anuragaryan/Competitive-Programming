/*
ID: me44
PROG: gift1
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include<vector>
#include<map>
using namespace std;

int main() {
	int NP,money,num,gift;
	string giver, name,receiver;
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
	fin>>NP;
	vector<string>givers;
	for(int i=0;i<NP;i++){
		fin>>name;
		givers.push_back(name);
	}
	map<string,int>people;
	for(int i=0;i<NP;i++){
		fin>>giver>>money>>num;
		if(money==0 || num==0)
			continue;
		gift=money/num;
		for(int j=0;j<num;j++){
			fin>>receiver;
			people[receiver]+=gift;
		}
		people[giver]-=gift*num;
		}
	for(vector<string>::iterator iter=givers.begin();iter!=givers.end();iter++)
		fout<<*iter<<" "<<people[*iter]<<"\n";
    return 0;
}
