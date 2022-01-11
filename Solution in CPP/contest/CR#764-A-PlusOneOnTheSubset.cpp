
#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
      long long int n;
	  cin>>n;
	  long long int a[n];
	  long long int d[n];
	  for (int i = 0; i < n; i++)
	  {
		  cin>>a[i];
	  }

	  long long int maxa=*max_element(a,a+n);
	  long long int mina=*min_element(a,a+n);

	  cout<<maxa-mina<<endl;

	  

	}

	return 0;
}
