//Think in binary
#include<iostream>
using namespace std;
int arr[400005][50]; // [][50 bits] kol n mmkn tb2a represented in max of 50 bits 
int counts[40000];  //kam digit fe binary representation l kol raqm -> 10(decimal) reppresented in 4 bits 
int main()
{
	/*Logic 
	* 
	* look at the number in its binary form and check how many of its (non-sign) bits are 1
	* .If there are more than one 1 bits then it necessarily has an odd divisor.
	* 
	*/
	int t;
	cin >> t;
	long long int n;
	int countOnes = 0; // kam one 3ande fe binary rep. 10 -> 10101 yb2a da kda has odd divisors 
	for (int i = 0; i < t; i++)
	{
		cin >> n;

		//convert to binary 
		for (int j = 0; n > 0; j++)
		{
			arr[i][j] = n % 2;
			n = n / 2; //complexity o(log2n)
			counts[i]++;
			if (arr[i][j] == 1)
				countOnes++;
		}
		if (countOnes == 1)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
		//cout << countOnes;
		countOnes = 0;
		//cout << counts[i];
	}

}
