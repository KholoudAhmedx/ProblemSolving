#include<iostream>
using namespace std;
int main()
{
	char arr[2][100]; 
	int tc; //number of test cases
	cin >> tc;

	
	for (int i = 0; i < tc; i++)
	{
		int n;
		cin >> n;
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < n; k++)
			{
				cin >> arr[j][k]; //takes input
			}
		}

		//checks
		bool flag = false;
		for (int j = 0; j < 1; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (arr[j][k] == arr[j + 1][k])
					flag = true;
				else if ((arr[j][k] == 'B' && arr[j + 1][k] == 'G') || (arr[j][k] == 'G' && arr[j + 1][k] == 'B'))
					flag = true;
				else
				{
					flag = false;
					break;
				}
					

			}
		}
		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}