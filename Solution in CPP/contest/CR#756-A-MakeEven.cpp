
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
		long long int mv = 0;
		if (n % 2 == 0)
			cout << mv << endl;
		else
		{
			bool possible = false;
			long long int ind = 0;
			long long int  fstEven = 111111111111111;
			while (n / 10 != 0)
			{
				int remainder = n % 10;

				if (remainder % 2 == 0)
				{
					fstEven = ind;
					possible = true;
				   // cout<<"ind "<<ind<<" re "<<remainder<<endl;
				}
				n = n / 10;
				ind--;
			}
		    // cout << "n " << n << endl;
			if ((n % 10) % 2 == 0)
			{
				fstEven = ind;
				possible = true;
			}
			//cout<<"ind "<<ind<<" fst "<<fstEven<<endl;
			mv = fstEven - ind;
			if (possible)
			{
				if (mv == 0)
					cout << "1" << endl;
				else
					cout << "2" << endl;
			}
			else
				cout << "-1" << endl;
		}
	}
	return 0;
}
