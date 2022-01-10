
#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	cin >> t;
	while (t--)
	{

		long long int a, b;
		cin >> a >> b;

		if (a ==0 || b == 0)
			cout << "0" << endl;
		else if (a == b)
		{

			cout << (a + b) / 4 << endl;
		}
		else
		{
			
			long long int minab;
			if(a<b)
			minab=a;
			else 
			minab=b;
			//cout<<"a "<<a<<" b "<<b<<" minab "<<minab<<endl;
			if((a+b)/4 >=minab)
			cout<<minab<<endl;
			else
			cout<<(a+b)/4<<endl;
		}
	}

	return 0;
}
