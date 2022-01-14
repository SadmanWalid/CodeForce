
#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int x;
		cin >> x;
		int lengthOfX = 0;

		while (x / 10 != 0)
		{
			x = x / 10;
			lengthOfX++;
		}
		lengthOfX++;
		int numberOfFloor = x % 10;
		int deduction = 0;
		if (lengthOfX == 1)
			deduction = 9;
		else if (lengthOfX == 2)
			deduction = 7;
		else if (lengthOfX == 3)
			deduction = 4;

		cout << numberOfFloor * 10 - deduction << endl;
	}

	return 0;
}
