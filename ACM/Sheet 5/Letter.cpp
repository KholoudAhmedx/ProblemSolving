#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	
	string heading = " ";
	string text = " ";

	bool found = true;
	map<char, int> mp;

	getline(cin, heading); //read white spaces
	getline(cin, text);

	for (int i = 0; i < heading.length(); i++)
	{
		if(heading[i] != ' ')
			mp[heading[i]]++;
	}
		
	
	for (int j = 0; j < text.length(); j++)
	{
		for (auto x : mp)
		{
			if (text[j] == ' ')
				continue;

			//each letter in heading cannot be used more than once
			else if (x.first == text[j] && x.second > 0)
			{
				found = true;
				mp[text[j]] --; // decrease count each time this letter used
				break; // when you find that letter in header
			}
			else
				found = false;
		}
		if (found == false)
			break; // if any letter in the text is not existed in header , then he cannot send text
			
	}
	if (found)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;


}