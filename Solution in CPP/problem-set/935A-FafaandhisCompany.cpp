
#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main()
{
	ll n, c = 0, t;
	cin >> n;

	for (int i = 1; i <= n / 2; i++)
	{
		t = n - i;
		if (t % i == 0)
			c++;
	}
	cout << c << endl;
	return 0;
}
