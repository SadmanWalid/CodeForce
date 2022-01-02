
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m=-1;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
		if(m<a[i])
		m=a[i];
	}

	int r=0;

	for (int i = 0; i < n; i++)
	{
		r+=m-a[i];
		
	}
	

	cout<<r;
	
	return 0;
}
