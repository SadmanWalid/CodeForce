
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		long long int a[n];

		for (int i = 0; i < n; i++)
		{
			a[i] = pow(2, i + 1);
		}

		long long int s1 = 0, s2 = 0;

		for (int i = n - 2; i >= (n - n / 2) - 1; i--)
		{
			s1 += a[i];
		}
		for (int i = 0; i < (n - n / 2) - 1; i++)
		{
			s2 += a[i];
		}

		s2 += a[n - 1];

		//cout<<"s1 "<<s1<<" s2 "<<s2<<endl;
		cout << abs(s1 - s2) << endl;
	}
	return 0;
}
