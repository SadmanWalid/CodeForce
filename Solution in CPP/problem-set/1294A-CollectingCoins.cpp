
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c, n, dif;
		cin >> a >> b >> c >> n;
		int A[3] = {a, b, c};
		int maxabc = *max_element(A, A + 3);
		for (int i = 0; i < 3; i++)
		{
			dif = maxabc - A[i];
			n -= dif;
		}

		if (n >= 0)
		{
			if (n % 3 == 0 || n == 0)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else
			cout << "NO" << endl;
	}

	return 0;
}
