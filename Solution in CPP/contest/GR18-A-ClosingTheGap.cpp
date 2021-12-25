
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
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
		int s = 0;
		for (int i = 0; i < n; i++)
		{
			s += a[i];
		}

		if (s % n == 0)
			cout << "0" << endl;
		else
			cout << "1" << endl;
	}

	return 0;
}
