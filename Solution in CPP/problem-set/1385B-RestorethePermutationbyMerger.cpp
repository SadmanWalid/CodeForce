
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
		int m = 2 * n;
		int r[n], a[m];
		// input
		for (int i = 0; i < n; i++)
		{
			r[i] = 0;
		}

		for (int i = 0; i < m; i++)
		{

			cin >> a[i];
		}

		// finding result

		r[0] = a[0];

		int ite = 1;
		int ai = 1, ri = 1;
		bool used = false;
		int cn = a[ai];
		while (ite <= n)
		{

			for (int i = 0; i < n; i++)
			{
				if (cn == r[i])
				{
					used = true;
					break;
				}
				else
				{
					used = false;
				}
			}
			if (used)
			{
				// cout<<"used"<<endl;
				ai++;
				cn = a[ai];
			}
			else
			{
				// cout<<"not used"<<endl;

				r[ri] = a[ai];
				// cout << r[ri] << endl;
				ai++;
				cn = a[ai];
				ri++;
				ite++;
			}
		}

		for (int i = 0; i < n; i++)
		{
			cout << r[i] << " ";
		}
		cout << endl;
	}

	return 0;
}
