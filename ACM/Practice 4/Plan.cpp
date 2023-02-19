#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int arr[100005];
int main()
{
	int n, q;
	cin >> n >> q;
	bool flag = false;
	map<int, int > mp;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		mp[arr[i]] = i;
	}
	/*for (auto x : mp)
	{
		cout << x.first << " " << x.second << endl;
	}*/
	sort(arr, arr + n);
	while (q--)
	{
		int x;
		cin >> x; 
		int start = 0, end = n - 1, mid;
		while (start <=end)
		{
			mid = (start + end) / 2;
			if (x == arr[mid])
			{
				cout << "Yes" << " " << mp[arr[mid]] + 1<< endl;
				flag = true;
				break;
				//break;
			}
			else if (x > arr[mid])
				start = mid + 1;
			else if (x < arr[mid])
				end = mid - 1;
		}
		if (!flag)
			cout << "No" << endl;
		flag = false;
		
	}
}