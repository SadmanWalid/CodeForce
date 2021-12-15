#include<iostream>

using namespace std;

int main()
{

int n,enter,exit;
cin>>n;
int r[n],currentPassenger=0;

for(int i=0;i<n;i++)
{
    cin>>exit>>enter;

    currentPassenger=currentPassenger+enter-exit;
    r[i]=currentPassenger;

}

int max=0;

for(int i=0;i<n;i++)
{
    if(r[i]>max)
     max=r[i];
}

cout<<max;



return 0;
}
