
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int t = min(abs(a - b) + abs(c - a), abs(a - b) + abs(c - b));

	cout << min(t, abs(a - c) + abs(b - c));

	return 0;
}
