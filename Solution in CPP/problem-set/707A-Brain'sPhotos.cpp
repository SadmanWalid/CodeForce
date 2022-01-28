
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	char a[n][m];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	bool isBlack = true;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] == 'C' || a[i][j] == 'M' || a[i][j] == 'Y')
			{
				cout << "#Color" << endl;
				isBlack = 0;
			}
			if (!isBlack)
				break;
		}
		if (!isBlack)
			break;
	}
	if (isBlack)
		cout << "#Black&White" << endl;

	return 0;
}
