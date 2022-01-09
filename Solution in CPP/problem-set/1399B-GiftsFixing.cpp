
#include <bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin>>n;
		int a[n],b[n];
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin>>b[i];
		}
        
		int ma=*min_element(a,a+n);
		int mb=*min_element(b,b+n);
		

		long long int mv=0;
		for (int i = 0; i < n; i++)
		{
			
			if(a[i]>ma && b[i]>mb)
			{
				int minab= min(a[i]-ma,b[i]-mb);
				mv+= minab+ abs((a[i]-ma)-(b[i]-mb));

			}
			else if(a[i]>ma || b[i]>mb)
			{
				if(a[i]>ma)
				{
					mv+=a[i]-ma;

				}
				else
				{
					mv+=b[i]-mb;

				}
			}
		}

		cout<<mv<<endl;
		

	}
	return 0;
}
