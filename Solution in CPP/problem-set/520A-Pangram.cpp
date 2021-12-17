
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string w;
	cin >> w;
	set<char> c;
	if (n < 26)
	{
		cout << "NO";
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			c.insert(tolower(w[i]));
		}

		if (c.size() == 26)
			cout << "YES";
		else
			cout << "NO";
	}

	return 0;
}
