
#include <bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		int x = a[0], y = a[1], z = a[2];
		int c;

		if (x == y)
			c = x;
		else if (x == z)
			c = x;
		else if (y == z)
			c = y;

		for (int i = 0; i < n; i++)
		{
			if (a[i] != c)
				cout << i + 1 << endl;
		}
	}
	return 0;
}
