
#include <bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		string b;
		cin>>b;
		string a;
		a=a+b[0];
		

		for (int i = 0; i < b.size(); i++)
		{
			if(i%2!=0)
			a+=b[i];
		}
		cout<<a<<endl;
		
	}


	
	return 0;
}
