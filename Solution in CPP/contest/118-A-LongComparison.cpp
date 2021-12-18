
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	long double f_number[2], s_number[2];
	long double f, s;
	int c = 0;
	long double pmin, pmax;
	while (t--)
	{
		cin >> f_number[0] >> f_number[1];
		cin >> s_number[0] >> s_number[1];

		long double min_p = min(f_number[1], s_number[1]);
		pmin = min_p;
		pmax = max(f_number[1], s_number[1]);

		f_number[1] = f_number[1] - min_p;
		s_number[1] = s_number[1] - min_p;

		

		//cout << "f[0]: " << f_number[0] << " f[1]: " << f_number[1] << "s[0]: " << s_number[0] << " s[1]: " << s_number[1] << "\n\nf: " << f_number[0] * pow(10, f_number[1]) << endl;
		//cout << "s: " << s_number[0] * pow(10, s_number[1]) << endl;

		if (f_number[1] > 6 || s_number[1] > 6)
		{
			//cout << "1st if" << endl;
			if (f_number[1] < s_number[1])
				cout << "<" << endl;
			else if (f_number[1] > s_number[1])
				cout << ">" << endl;
			else
			{
				if (f_number[0] < s_number[0])
					cout << "<" << endl;
				else if (f_number[0] > s_number[0])
					cout << ">" << endl;
				else
					cout << "=" << endl;
			}
		}
		else
		{
			f = f_number[0] * pow(10, f_number[1]);
			s = s_number[0] * pow(10, s_number[1]);

			//cout << "else " << endl;
			//cout<<"s: "<<s<<" f: "<<endl;
			if (f < s)
				cout << "<" << endl;
			else if (f > s)
				cout << ">" << endl;
			else
				cout << "=" << endl;
		}

		// f = f_number[0] * pow(10, f_number[1]);
		// s = s_number[0] * pow(10, s_number[1]);

		// f = f / pow(10, min_p);
		// s = s / pow(10, min_p);

		// cout<<"c: "<<++c<<endl;
		// cout << "F: " << f << " s: " << s << " minp:" << min_p<< endl;
	}
	return 0;
}
