
#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	int l=s.length();
	int ite=0;
    string r;
	//cout<<"s l "<<l<<endl;
	while(ite<l)
	{
		if(s[ite]=='.')
		{
			r.append("0");
			ite++;
		}
		else if(s[ite]=='-')
		{
			if(s[ite+1]=='.')
			{
				r.append("1");
				ite+=2;
			}
			else if(s[ite+1]=='-')
			{
				r.append("2");
				ite+=2;
			}
		}
		//cout<<"ite "<<ite<<endl;
	}
//cout<<"ite "<<ite<<endl;
	cout<<r<<endl;
	return 0;
}
