
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string a[n];
	// taking string input
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int f = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] == "Tetrahedron")
		{
			f += 4;
		}
		else if (a[i] == "Cube")
		{
			f += 6;
		}
		else if (a[i] == "Octahedron")
		{
			f += 8;
		}
		else if (a[i] == "Dodecahedron")
		{
			f += 12;
		}
		else if (a[i] == "Icosahedron")
		{
			f += 20;
		}
	}
	cout<<f;

	return 0;
}
