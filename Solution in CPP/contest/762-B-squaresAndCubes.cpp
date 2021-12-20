
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
    long int n;
	while (t--)
	{
		set <long int> c;
		cin>>n;

		for (int i = 1; i <= n  ; i++)
		{
			//cout<<"square: "<<pow(i,2)<<endl;
			//cout<<"cube : "<<pow(i,3)<<endl;
			if((pow(i,2))<=n)
			 c.insert(pow(i,2));
			if((pow(i,3))<=n)
			 c.insert(pow(i,3)); 
			if((pow(i,2))>n)
			 break; 
			
		}
		cout<<c.size()<<endl;
		

		
	}

	return 0;
}
