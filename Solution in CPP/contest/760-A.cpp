
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

	int t;
	cin >> t;
	int ite = t;
	t = 0;
	int b[ite][7];
	int a[ite][3];

	int seven, one, two, three, four;
	while (t <ite)
	{

		for (int j = 0; j < 7; j++)
		{
			cin >> b[t][j];
		}
		seven = b[t][6];
		one = b[t][0];
		two = b[t][1];
		three = b[t][2];
		four = b[t][3];

		if (one + two + three == seven)
		{
			//cout << one << " " << two << " " << three << endl;
		    a[t][0] =one;
			a[t][1] =two;
			a[t][2] =three;
			
		}
		else if (one + two + four == seven)
		{
			//cout << one << " " << two << " " << four << endl;
			a[t][0] =one;
			a[t][1] =two;
			a[t][2] =four;
		}
		else if (one + three + four == seven)
		{
			//cout << one << " " << three << " " << four << endl;
			a[t][0] =one;
			a[t][1] =three;
			a[t][2] =four;
		}
		else if (two + three + four == seven)
		{
			//cout << two << " " << three << " " << four << endl;
			a[t][0] =two;
			a[t][1] =three;
			a[t][2] =four;
		}

		t++;
	}

	for (int i = 0; i < ite; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
		
	}
	
}
