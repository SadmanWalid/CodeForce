
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
		int a[n], noe = 0, nod = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] % 2 == 0)
				noe++;
			else
				nod++;
		}
		int numberOfMissMatch = 0;
		if (n % 2 == 0)
		{
			if (noe == nod)
			{
				// number of miss match
				for (int i = 0; i < n; i++)
				{
					if (i % 2 != a[i] % 2)
						numberOfMissMatch++;
				}
				cout << numberOfMissMatch / 2 << endl;
			}
			else
				cout << "-1" << endl;
		}
		else
		{
			if (noe == nod + 1)
			{
				// number of miss match
				for (int i = 0; i < n; i++)
				{
					if (i % 2 != a[i] % 2)
						numberOfMissMatch++;
				}
				cout << numberOfMissMatch / 2 << endl;
			}
			else
				cout << "-1" << endl;
		}
	}
	return 0;
}
