
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

	int t;
	cin >> t;

	int ite = t;

	long long a, b, maximumExcitement = 0;

	while (t--)
	{

		cin >> a >> b;

		if (a == b)
			cout << "0 0" << endl;
		else if (a - b == 1 || a - b == -1)
			cout << "1 0" << endl;
		else if (a == 0 || b == 0)
		{
			if (a == 0)
			{
				cout << b << " 0" << endl;
			}
			else
			{
				cout << a << " 0" << endl;
			}
		}

		else
		{
		    maximumExcitement = abs(a - b);
			long long m1, m2;
			m1 = b % maximumExcitement;
			m2 = maximumExcitement - (b % maximumExcitement);
			long long numberOfMoves = min(m1, m2);

			// cout << "maximum ex: " << maximumExcitement << " a - b " << a << " - " << b << endl;
			// cout << "g :" << maximumExcitement << " g-b : " << maximumExcitement - b << " " << maximumExcitement - b << " mod " << maximumExcitement << " = " << m2 << endl;
			// cout << "m1: " << m1 << " m2: " << m2 << endl;

			cout<<maximumExcitement<<" "<<numberOfMoves<<endl;
		}
	}

	return 0;
}
