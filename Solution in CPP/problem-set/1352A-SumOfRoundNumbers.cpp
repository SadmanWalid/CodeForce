
#include <bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		int n, it = 0;
		set<int, greater<int>> c;
		cin >> n;
		while (n / 10 != 0)
		{
			if (n % 10 != 0)
			{
				c.insert((n % 10) * pow(10, it));
			}

			n = n / 10;
			it++;
		}
		c.insert((n % 10) * pow(10, it));
		//c.erase(0);
		cout << c.size() << endl;

		// set<int>:: iterator itr;
		for (auto itr = c.begin(); itr != c.end(); itr++)
		{
			cout << *itr << " ";
		}
		cout << endl;
	}
	return 0;
}
