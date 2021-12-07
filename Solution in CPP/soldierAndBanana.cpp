#include<iostream>

using namespace std;

int main()
{

int k,n,w; 
cin>>k>>n>>w;

//calculate total dollars needed to buy w bananas
int totalDollar=0;
for(int i=1;i<=w;i++)
{
    totalDollar+=k*i;
}
int dollarNeeded=0;
if(totalDollar>n)
{
   dollarNeeded=totalDollar-n;
}
cout<<dollarNeeded;
return 0;
}
