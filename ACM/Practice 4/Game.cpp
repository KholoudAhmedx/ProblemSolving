#include<iostream>
using namespace std;
int arr[100005];
int main()
{
	int n, q;
	cin >> n >> q;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int output = 0;
	bool falg = false, flag = false;
	while (q--)
	{
		int x;
		cin >> x;
		int start = 0, end = n - 1, mid;
		while (start <= end)
		{
			mid = (start + end) / 2;
			if (arr[mid] > x)
			{
				output = arr[mid];
				end = mid - 1;
				falg = true;
			}
			else if (arr[mid] < x)
			{
				start = mid + 1;
			}
			else if (arr[mid] == x)
			{
				if (mid == n - 1)
					cout << -1 << endl;
				else 

					cout << arr[mid + 1] << endl;
				/*flag = true;*/
				flag = true;
				break;
			}
			else
				break;
		}
		if (falg && !flag)
		{
			cout << output << endl;
			falg = false;
		}
			
		else if (!flag && ! falg)
			cout << -1 << endl;
		flag = false;
		//output = 0;
	}
}