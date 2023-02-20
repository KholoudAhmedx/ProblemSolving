#include<iostream>
using namespace std;
int main()
{
	long long a, b, k;
	long long count = 0;
	cin >> a >> b >> k;
	while (a <= b)
	{
		long long mid = (a + b) / 2;
		if (k == mid)
		{
			count++;
			break;
		}
		else if (mid > k)
		{
			b = mid - 1;
			count++;
		}
		else if (mid < k)
		{
			a = mid + 1;
			count++;
		}
	}
	cout << count << endl;
}