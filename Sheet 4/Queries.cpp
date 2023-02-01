#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
long long binarySearch(long long  arr[], long long b, long long n);
long long a[200000];
int main()
{
	int n, m; //size of array a, b
	
	cin >> n >> m;
	long long count = 0;

	for (int i = 0; i < n; i++)
		cin >> a[i]; //array a 
	sort(a, a + n); //sort array
	
	long long b_entries;
	map<long long, long long > map;
	while (m--)
	{
		// read b entries
		cin >> b_entries;
		if (map[b_entries] != 0) //lw feha hahga
			cout << map[b_entries] << " ";
		else
		{
			long long ans = binarySearch(a, b_entries, n); // hyakhod array a , w b entry w size bta3 array a
			cout << ans << " ";
		}
	}

	
}
long long binarySearch(long long  arr[], long long b, long long n)
{
	long long start = 0, end = n - 1, mid;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (start== end) {
			break;
		}

		if (arr[mid] <= b) {
			start = mid + 1;
		}
		else {
			end = mid;
		}

		

	}
	if (arr[mid] <= b) {
		return mid + 1; // 3shan yrg3lo 3add el arqam elly asgher mno
	}

	return mid;
}
