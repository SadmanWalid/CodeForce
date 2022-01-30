
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int r[n],ite = 0 ;
		if (n % 2 == 0)
		{
			 ite = n;
			// ==============temp ruler===================
            // for (int i = 0; i < n; i++)
			// {
			// 	cout<<i+1<<" ";
			// }
            // cout << endl;
			for (int i = 0; i < n; i++)
			{
				cout << ite-- << " ";
			}
			cout << endl;
		}

		else 
		{
			ite=n;
			for (int i = 0; i < n; i++)
			{
				r[i]=ite--;
			}
			//swap i=n/2 and i=n/2+1
			int temp=r[n/2];
			r[n/2]=r[(n/2)+1];
			r[(n/2)+1]=temp;
      
	     	// ==============temp ruler===================
            // for (int i = 0; i < n; i++)
			// {
			// 	cout<<i+1<<" ";
			// }
			// cout << endl;
			//print
			for (int i = 0; i < n; i++)
			{
				cout<<r[i]<<" ";
			}
			cout << endl;
			
			
		}
	}

	return 0;
}
