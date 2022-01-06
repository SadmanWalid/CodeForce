
#include <bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin>>t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;

		if (a == b)
			cout << pow(2 * a, 2) << endl;
		else
		{
			int sm, bg;
			if (a > b)
			{
				sm = b;
				bg = a;
			}
			else
			{
				sm = a;
				bg = b;
			}

			if(bg%sm==0 || (2*sm)<bg)
			cout<<pow(bg,2)<<endl;
			else{
				int it=sm;
				while(it<bg)
				{
					if(it==bg)
					{
						break;
					}
					it+=sm;

				}
				cout<<pow(it,2)<<endl;
			}
		}
	}
	return 0;
}
