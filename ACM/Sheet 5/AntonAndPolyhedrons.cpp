#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string shape = " ";
	long long int count = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> shape;
		if (shape == "Tetrahedron")
			count += 4;
		else if (shape == "Cube")
			count += 6;
		else if (shape == "Octahedron")
			count += 8;
		else if (shape == "Dodecahedron")
			count += 12;
		else if (shape == "Icosahedron")
			count += 20;
	}
	cout << count << endl;

}