
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int p[n];
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}

	int c = 0;
	for (int i = 0; i < n; i++)
	{
		if (5 - p[i] >= k)
			c++;
	}

	cout << c / 3;

	return 0;
}
