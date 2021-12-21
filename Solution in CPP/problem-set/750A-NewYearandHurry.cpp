
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n,t;
	cin>>n>>t;
	int tt=240;
	int ttosolve=tt-t;
    int a[n];
	for (int i = 0; i < n; i++)
	{
		a[i]=5*(i+1);
	}
	// for (int i = 0; i < n; i++)
	// {
	// 	//cout<<a[i]<<" ";
	// }
	// //cout<<endl;
	
	

   int numberofproblems=0;
   int sum=0;
   for (int i = 0; i < n; i++)
   {
     sum+=a[i];
     if(sum<=ttosolve)
	 {
		 numberofproblems++;
	 }
	   
   }
    //cout<<"sum: "<<sum<<"tto"<<ttosolve<<endl;
	cout<<numberofproblems;


	return 0;
}
