
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	long long n;

	cin>>n;

	int bill[5] = {100, 20, 10, 5, 1};

	int output = 0;

	for (int i = 0; i < 5; i++)
	{
		if (n >= bill[i])
		{
			output += n / bill[i];
			n = n % bill[i];
		}
	}

	cout << output;

	return 0;
}
