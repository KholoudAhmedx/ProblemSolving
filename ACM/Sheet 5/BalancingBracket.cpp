#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int tc; //number of testcases
	cin >> tc;

	stack<char> stck;
	int count ;
	for (int i = 0; i < tc; i++)
	{
		int length;
		char s;
		cin >> length;
		count = 0;
		for (int i = 0; i < length; i++)
		{
			
			cin >> s; // ))()(
			if (s == '(')
				stck.push('(');
			else if (s == ')')
			{
				if (stck.empty())
					count++;
				else
					stck.pop();
			}
		
		}
		while (!stck.empty())
		{
			count++;
			stck.pop();
		}
			
		cout << count << endl;

	}
	
}