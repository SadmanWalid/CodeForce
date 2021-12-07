#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
	int n,sum=0;
	//cout<<"enter n: ";
	cin>>n;
	int ar[n];
	//cout<<"enter input: ";
	for (int i = 0; i < n; i++)
	{
		cin>>ar[i];
        sum+=ar[i];
	}

	double answer=(double)sum/n;
	//cout<<"sum: "<<sum<<" answer: "<<answer<<endl;

    printf("%.12f", answer);
    


	
	
}