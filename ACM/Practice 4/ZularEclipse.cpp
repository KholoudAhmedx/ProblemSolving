#include<iostream>
#include<algorithm>
using namespace std;
int arr[100005];
long long int prefix[100005];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	

	sort(arr, arr + n);

	//prefix sum
	long long int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
		prefix[i] = sum;
	}
	//for (int i = 1; i <= n; i++)
	//	prefix[i] = prefix[i - 1] + arr[i];

	int q;
	cin >> q;
	long long index;
	bool flag = false;
	while (q--)
	{
		long long int x;
		cin >> x;
		long long int  start = 0, end = n - 1, mid;
		while (start <= end)
		{
			mid = (start + end) / 2;
			 if (arr[mid] <= x)
			{
				index = mid; //keep track of awel asgher index after x aw equal x 
				start = mid + 1;
				flag = true;
				
			}
			else if (arr[mid] > x)
			{
				end = mid - 1;
			}
			 
		}
		if (flag)
		{
			cout << index + 1 << " " << prefix[index] << endl;
			flag = false;
		}
			
		else
			cout << -1 << endl;
	}
}