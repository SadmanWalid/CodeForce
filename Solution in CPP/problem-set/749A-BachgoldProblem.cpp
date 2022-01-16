
#include <bits/stdc++.h>

using namespace std;

int no2 = 0, no3 = 0, no1 = 0;

void CalculatePrimes(int n)
{
	if (n == 2 || n == 3)
	{
		if (n == 2)
			no2++;
		else if (n == 3)
			no3++;
		return;
	}
	else
	{
		if (n % 2 == 0)
		{
			CalculatePrimes(n / 2);
			CalculatePrimes(n / 2);
		}
		else
		{
			no1++;
			CalculatePrimes(n - 1);
		}
	}
}

void ModifyNo3()
{
	no2 += 2 * (no3 / 2) + no3 / 2;
	no3 = no3 % 2;
}
void ModifyNo1()
{
	if (no1 == 1)
	{
		if (no3 == 0)
		{
			no2--;
			no3++;
		}
		else if (no3 != 0)
		{
			no3--;
			no2++;
		}
	}
	else if (no1 >= 2)
	{
		if (no1 % 2 == 0)
			no2 += no1 / 2;
		else
		{
			no3++;
			no2 += (no1 / 2) - 1;
		}
	}
}

int main()
{
	int n;
	cin >> n;

	// recursive function

	CalculatePrimes(n);

	// cout<<"no2 : no3 "<<no2<<" : "<<no3<<endl;

	ModifyNo3();
	ModifyNo1();
	// cout<<"no2 : no3 "<<no2<<" : "<<no3<<endl;

	cout << no3 + no2 << endl;
	for (int i = 0; i < no2; i++)
	{
		cout << "2 ";
	}
	for (int i = 0; i < no3; i++)
	{
		cout << "3 ";
	}
	cout << endl;

	return 0;
}
