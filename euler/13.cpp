#include<iostream>
#include<fstream>
using namespace std;
//Unsigned 100 digit number
class hugeInt{
  public:
    hugeInt();
    void print();
    int z[100];
};

hugeInt::hugeInt(){
  for (int i = 0; i < 100; i++){
    z[i] = 0;
  }
}

void hugeInt::print(){
  int i = 99;
  while (z[i] == 0) i--;
  while (i >= 0){
    cout << z[i];
    i--;
  }
  cout << endl;
}

hugeInt add(hugeInt a, hugeInt b){
  int carry = 0;
  int temp = 0;
  hugeInt newInt;
  for (int i = 0; i < 100; i++){
    temp = a.z[i]+b.z[i];
    temp += carry;
    carry = 0;
    if (temp >= 10) {temp -= 10; carry = 1;}
    newInt.z[i] = temp;
  }
  return newInt;
}

int main()
{
	ifstream infile("13.txt");   //13.txt file will contain the number array
	hugeInt in, currSum;
for (int y = 0; y < 100; y++){
    for (int i = 49; i >= 0; i--){
      in.z[i] = infile.get()-48;
    }
    in.print();
    currSum = add(in, currSum);
    infile.get();
  }
  currSum.print();
  return 0;
}

