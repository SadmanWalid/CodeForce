
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	string s;
	int l;
	while (t--)
	{
		cin >> s;
		l = s.length();
		if (l % 2 != 0)
			cout << "No" << endl;
		else
		{
			int mid=(l/2)-1;
			string fstPart = s.substr(0,mid+1);
			string sndPart = s.substr(mid+1,l-1);
			//cout<<fstPart<<" - "<<sndPart;
			if(fstPart==sndPart)
			 cout<<"Yes"<<endl;
			else
			cout<<"No"<<endl;
		}
	}

	return 0;
}
