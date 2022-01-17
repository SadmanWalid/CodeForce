
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int c[n];
	for (int i = 0; i < n; i++)
	{
		cin >> c[i];
	}

	long long int sr = 0, dr = 0;
	bool s = true, d = false;
	int ite = n, fi = 0, li = n - 1;
	while (ite--)
	{
		if (s)
		{
			s = false;
			d = true;
			int f = c[fi];
			int b = c[li];
			if (f >= b)
			{
				sr += f;
				fi++;
			}
			else if (f < b)
			{
				sr += b;
				li--;
			}
		}
		else if (d)
		{
			d = false;
			s = true;
			int f = c[fi];
			int b = c[li];
			if (f >= b)
			{
				dr += f;
				fi++;
			}
			else if (f < b)
			{
				dr += b;
				li--;
			}
		}

		
	}
	cout<<sr<<" "<<dr<<endl; 
	return 0;
}
