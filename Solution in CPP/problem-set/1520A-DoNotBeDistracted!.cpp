
#include <bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin >> t;
	int c = 0;
	while (t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		bool r = true;
		

		for (char c = 'A'; c<='Z'; c++)
		{

          int last=-1;
		  int first=n;
          //first last
		  for (int j = 0; j< n; j++)
		  {
			  if(s[j]==c)
			  {
				  first= min(first,j);
				  last= max(last,j);
			  }
		  }
		  //in between

		  for (int i=first; i <= last; i++)
		  {
			  if(s[i]!=c)
			  {
				  cout<<"NO"<<endl;
			      r=false;
				  break;
			  }
		  }
		  if(!r)
		  break;
		  
		  


		}
		if(r)
		cout<<"YES"<<endl;

		
	}
	return 0;
}
