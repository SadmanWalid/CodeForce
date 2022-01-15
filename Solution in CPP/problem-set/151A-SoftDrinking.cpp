
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, b, l, limes, slicesPerlime, salt, neededL, neededS;
	cin >> n >> b >> l >> limes >> slicesPerlime >> salt >> neededL >> neededS;

	int notFromL = (b * l) / neededL;
	int notFromLime = limes * slicesPerlime;
	int notFromS = salt / neededS;

	cout << min(notFromL, min(notFromLime, notFromS)) / n << endl;
	return 0;
}
