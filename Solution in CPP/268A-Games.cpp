#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

	int numberOfTeams, output = 0;
	cin >> numberOfTeams;
	int colorOfuniforms[numberOfTeams][2];

	// taking input
	int h, a;
	for (int i = 0; i < numberOfTeams; i++)
	{
		cin >> h >> a;
		colorOfuniforms[i][0] = h;
		colorOfuniforms[i][1] = a;
	}

	for (int i = 0; i < numberOfTeams; i++)
	{
		// if color of host home == guest away
		for (int j = 0; j < numberOfTeams; j++)
		{
			if (colorOfuniforms[i][0] == colorOfuniforms[j][1])
				output++;
		}
	}

	cout << output;

	return 0;
}