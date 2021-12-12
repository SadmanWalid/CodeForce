#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int testCases;
	cin >> testCases;
	int inputs[testCases][2];
	int input[2];
	// taking input
	for (int i = 0; i < testCases; i++)
	{
		cin >> input[0] >> input[1];
		for (int j = 0; j < 2; j++)
		{
			inputs[i][j] = input[j];
		}
	}

	// for (int i = 0; i < testCases; i++)
	// {
	// 	cout << " a - b : ";
	// 	for (int j = 0; j < 2; j++)
	// 	{

	// 		cout << inputs[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	int a, b, numberOfMoves = 0;
	for (int i = 0; i < testCases; i++)
	{
		a = inputs[i][0];
		b = inputs[i][1];

		if (a % b != 0)
			numberOfMoves = b - (a % b);
		else
			numberOfMoves = 0;
		// cout << "a: " << a << " b: " << b << endl;
		cout << numberOfMoves << endl;
	}
}