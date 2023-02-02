
#include<iostream>
#include <cmath>
using namespace std;
long long composite[10000000]; //composite means that it's not prime //initially all values are assigned 0 [initially they are all primes] 

void seive()
{
	composite[0] = composite[1] = 1; // already 0 and 1 are not primes 
	for (long long i = 2; i <= 10000000; i++)
	{
		if (composite[i] == 0)
		{
			for (long long j = i * i; j <= 10000000; j += i)
			{
				//get multiples of prime number 
				composite[j] = 1; // mark all of a number's multiple as not prime

			}
		}
	}
}
int main(void)
{
	seive();
	long long n; //number of test cases
	cin >> n;
	long long num; 
	for(int i = 0; i < n; i++)
	{
		cin >> num;
		//get ssquare root of each number to check if it's integer
		/* 2 possibilities : a number whose sqrt() is integer value & a number whose sqrt() is double value
		   when sqrt()_1 == sqrt()_2 this is when sqrt() is integer value */
		double sq1 = sqrt(num);
		long long sq2 =sqrt(num);

		//check if the sqrt(number) is prime 
		if (sq1 == sq2 && composite[sq2] == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}
}
//
