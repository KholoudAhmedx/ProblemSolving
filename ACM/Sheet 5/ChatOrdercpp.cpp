#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string str;
	vector<string> v;
	map<string, bool> mp;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		v.push_back(str);
		mp[str] = false;
	}
	//cout << " THE OUTPUT : \t\t\t\n\n";
	for (int i = n - 1; i >= 0; i--)
	{
		if (mp[v[i]] == false)
		{
			cout << v[i] << endl;
				mp[v[i]] = true;
		}
		/*for (auto x : mp)
		{
			if (v[i] == x.first)
			{
				if (x.second == false)
				{
					cout << v[i] << endl;
					mp[v[i]] = true;
				}
			}
				
					
		}*/
	}
	
}
