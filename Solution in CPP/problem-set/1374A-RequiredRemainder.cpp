
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{

		int x,y,n,k;
		cin>>x>>y>>n;
        int nmx=n%x;
		if(y<nmx)
		cout<<n-abs(y-nmx)<<endl;
		else if(y>nmx)
		cout<<n-(x-abs(y-nmx))<<endl;
		else
		cout<<n<<endl;
	}
	return 0;
}
