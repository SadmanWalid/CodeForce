
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		long long int n;
		cin >> n;
		long long int ones = 45, twos = 54;
		ones = n / 3;
		twos = n / 3;
		long long int sum;
		sum = ones + twos * 2;

		if (n - sum == 1)
			ones++;
		else if (n - sum == 2)
			twos++;
		// cout<<"sum "<<sum<<endl;
		cout << ones << " " << twos << endl;
	}
	return 0;
}
