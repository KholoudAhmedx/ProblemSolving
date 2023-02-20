#include<iostream>
#include<vector>

using namespace std;
vector<int> v;
long long composite[3005]; //initially they are all primes , composite means not prime and they are all assigned initailly 0 

void seive()
{
	composite[0] = composite[1] = 1; //not primes 
	for (int i = 2; i <= 3000; i++)
	{
		if (composite[i] == 0)
		{
			for (int j = i * i; j <= 3000; j = j + i)
			{
				composite[j] = 1; //get multiples of prime number 
			}
		}
	}
	for (int i = 2; i <= 3000; i++)
	{
		if (composite[i] == 0)
		{
			v.push_back(i);
		}
	}
}

int main(void)
{
	seive();
	int n;
	cin >> n;
	int count1 = 0, count2 = 0;
	bool flag = true;
	for (int i = 6; i <= n; i++)
	{
		for (auto x : v)
		{
			if (i % x == 0)
				count1++;
			if (count1 > 2)
			{
				//you need not continue
				flag = false;
				break;
			}
		}
		if (flag && count1 == 2)
			count2++;
		count1 = 0; flag = true;
	}
	
	cout << count2 << endl;
}
