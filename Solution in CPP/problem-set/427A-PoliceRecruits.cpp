
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n],nOfPolice=0,nOfUntreatedCrime=0;

	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}


	for (int i = 0; i < n; i++)
	{
		if(a[i]>0)
		 nOfPolice+=a[i];
		else
		{
			
			if(nOfPolice<=0)
			{
				nOfUntreatedCrime++;
				
			}

			if(nOfPolice>0)
			 nOfPolice--;
			
		}

	}
	cout<<nOfUntreatedCrime;
	
	
	

	return 0;
}
