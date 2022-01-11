6
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
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
		}

		sort(a,a+n);
        int b[n-1];
		for (int i = 0; i < n-1; i++)
		{
			b[i]=abs(a[i]-a[i+1]);
			
		}

		cout<<*min_element(b,b+n-1)<<endl;
		
		
	}

	return 0;
}