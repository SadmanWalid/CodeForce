
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
		int c[n];
		long long int twos = 0, ones = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> c[i];
			if (c[i] == 1)
				ones++;
			else
				twos++;
		}

		// total weight odd or even
		if ((ones + twos * 2) % 2 != 0)
			cout << "NO" << endl;
		else
		{
			if (ones == 0)
			{
				if (twos % 2 == 0)
					cout << "YES" << endl;
				else
					cout << "NO" << endl;
			}
			else if (ones >= 2)
				cout << "YES" << endl;

		}
	//	cout << "t : o " << twos << " : " << ones << endl;
	}
	return 0;
}
