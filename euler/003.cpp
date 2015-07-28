#include<iostream>
using namespace std;
long long largest_factor(long long number) {
    long long result = 0;
    for (long long i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            result = i;
            while (number % i == 0)
                number /= i;
        }
    }
    if (number != 1)
        return number;
    return result;
}
int main()
{
	long long a=600851475143;
	long long n=largest_factor(a);
	cout<<n<<endl;
}
