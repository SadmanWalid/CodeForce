
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n], b[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
		}
		int sum = 0;
		while (k--)
		{
			int mina = 111111, maxb = 0, pToMin, pTomax;
			for (int i = 0; i < n; i++)
			{
				if (mina > a[i])
				{
					mina = a[i];
					pToMin = i;
				}

				if (maxb < b[i])
				{
					maxb = b[i];
					pTomax = i;
				}
			}
			if (maxb > mina)
			{
				a[pToMin] = maxb;
				b[pTomax] = mina;
			}
		}

		for (int i = 0; i < n; i++)
		{
			sum+=a[i];
		}
		cout<<sum<<endl;
		
	}
	return 0;
}
