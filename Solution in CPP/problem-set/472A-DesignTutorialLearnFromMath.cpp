
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int a)
{
	for (int i = 2; i <= 9; i++)
	{
		if (a % i == 0 && a != i)
		{
			return false;
		}
	}
	return true;
}
int main()
{

	int n, a, b;
	cin >> n;
	if (n % 2 == 0)
	{
		a = b = n / 2;

		while (isPrime(a) || isPrime(b))
		{
			a++;
			b--;
		}

		cout << a << " " << b << endl;
	}

	else
	{
		a = n / 2;
		b = a + 1;
		while (isPrime(a) || isPrime(b))
		{
			a++;
			b--;
		}
		cout << a << " " << b << endl;
	}

	return 0;
}
