
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int  mw = 0,cw = 0;
	while (n--)
	{
		int m, c;
		cin >> m >> c;
		if (m > c)
			mw++;
		else if(m<c)
			cw++;
	}
	if(mw>cw)
	cout<<"Mishka";
	else if(mw<cw)
	cout<<"Chris";
	else
	cout<<"Friendship is magic!^^";
	return 0;
}
