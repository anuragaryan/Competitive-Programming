#include<iostream>
#include<vector>
using namespace std;
void printArray(vector <int> ar){
	int l;
	l=ar.size();
	for(int i=0;i<l;i++)
		cout<<ar[i]<<" ";
	cout<<endl;
}
void insertionSort(vector <int> ar) {
	  int i, j;
	  int inserted = 0;
	  i = ar[ar.size()-1];

	  for (j = ar.size()-2; j > -1; j--){
		  if (ar[j] > i){
			  ar[j+1] = ar[j];
			  printArray(ar);
		  } else if (ar[j] <= i){
		ar[j+1] = i;
		inserted = 1;
		break;
		}
	}

	if(inserted == 0){
		ar[0] = i;
		}

	printArray(ar);
}
int main()
{
	vector <int> ar;
	int s,tmp;
	cin>>s;
	for(int i=0;i<s;i++)
	{
		cin>>tmp;
		ar.push_back(tmp);
	}
	insertionSort(ar);
	return 0;
}
