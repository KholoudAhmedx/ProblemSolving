#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int q; // number of operations to be implemented
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int type, x, y; //type means operation 1 or 2 or 3 
		cin >> type;
		if (type == 1)
		{
			cin >> x; //1 1 
			char ch = toupper(s[x - 1]);
			s[x - 1] = ch;
		}
		else if (type == 2)
		{
			cin >> x;
			char ch = tolower(s[x - 1]);
			s[x - 1] = ch;
			
		}
		else
		{
			cin >> x >> y;
			int ind1 = x - 1, ind2 = y - 1;
			swap(s[ind1],s[ind2]);
		}
			

	}
	cout << s << endl;
}