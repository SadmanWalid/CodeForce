
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int w, h;
		long long int n;
		long long int noc = 1;
		cin >> w >> h >> n;

		if (w % 2 == 0 || h % 2 == 0)
		{
			if (w % 2 == 0)
			{
				// long long int tempw = w;
				while (w % 2 == 0)
				{
					noc = noc * 2;
					w = w / 2;
				}
			}
			if (h % 2 == 0)
			{
				while (h % 2 == 0)
				{
					noc = noc * 2;
					h = h / 2;
				}
			}
		}

		if (noc >= n)
			cout << "yes" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
