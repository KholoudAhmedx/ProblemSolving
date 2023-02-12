#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int k, count = 0; //number of copies of the string
	cin >> k;

	string str;
	cin >> str;
	count++;

	string new_str = str; //update string with number of copies we have 
	for (int j = count; j < k; j++)
		new_str += str;

	int n, p; // p and c are the number of occurences of character "c"
	char c;

	vector<int> a[26];

	for (int j = 0; j < new_str.length(); j++)
	{
		a[new_str[j] - 'a'].push_back(j); // for each char in the string , store it's indecies to count number of occurences 
	}

	cin >> n; 
	for (int i = 0; i < n; i++)
	{
		cin >> p >> c;
		int j = a[c - 'a'][p - 1]; // byrg3 feh el index bta3 el char fe el string elly 3ande 
		new_str[j] = '#'; 

		//erase el index mn array
		a[c - 'a'].erase(a[c - 'a'].begin() + p - 1); // ???

	}
	for (int i = 0; i < new_str.length(); i++)
	{
		if (new_str[i] != '#')
			cout << new_str[i];
	}
	cout << endl;
	return 0;

}