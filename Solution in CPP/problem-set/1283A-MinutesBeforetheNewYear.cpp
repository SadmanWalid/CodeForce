
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int h, m;
		cin >> h >> m;

		int r = 60 - m;
		h++;
		r += (24 - h) * 60;
		cout << r << endl;
	}

	return 0;
}
