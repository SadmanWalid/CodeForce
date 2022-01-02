
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int t[n];
	int t1 = 0, t2 = 0, t3 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> t[i];
		if (t[i] == 1)
			t1++;
		else if (t[i] == 2)
			t2++;
		else
			t3++;
	}

	if (t1 == 0 || t2 == 0 || t3 == 0)
		cout << "0";
	else
	{
		int te = min(min(t1, t2), t3);
		int te1[te], te2[te], te3[te];
		int p1 = 0, p2 = 0, p3 = 0;

		// group by talent
		for (int i = 0; i < n; i++)
		{
			if (t[i] == 1)
			{
				if (p1 < te)
					te1[p1++] = i + 1;
			}

			else if (t[i] == 2)
			{
				if (p2 < te)
					te2[p2++] = i + 1;
			}

			else
			{
				if (p3 < te)
					te3[p3++] = i + 1;
			}
		}

		cout << te << endl;
		for (int i = 0; i < te; i++)
		{
			cout << te1[i] << " " << te2[i] << " " << te3[i] << endl;
		}
	}

	return 0;
}
