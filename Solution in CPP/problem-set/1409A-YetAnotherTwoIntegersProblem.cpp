
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	long  t;
	cin >> t;

	while (t--)
	{
		long long int a,b;

		cin>>a>>b;

		if(a==b)
		cout<<"0"<<endl;
		else{
			long long int d= abs(a-b);
			//cout<<"re "<<d/10<<" r "<<d%10<<endl;

			if(d%10==0)
			cout<<d/10<<endl;
			else
			cout<<d/10+1<<endl;
		}
		
	}

	return 0;
}
