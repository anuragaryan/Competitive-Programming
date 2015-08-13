#include<iostream>
#include<string>
using namespace std;

int whowins (string a, string b){
    if((a=="paper" && b=="rock") || (a=="scissors" && b=="paper") || (a=="rock" && b=="scissors"))
        return 1;
    else if(a==b)
        return 0;
    else return -1;
}
