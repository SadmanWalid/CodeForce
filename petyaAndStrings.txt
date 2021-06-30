#include<iostream>

using namespace std;

int main()
{
string first,second;
cin>>first;
cin>>second;  
int lengthOfF=first.length();

//convert strings in lower case

for(int i=0;i<lengthOfF;i++)
{
    if(first[i]<'a')// if character is Upper case
     first[i]=first[i]+32; // convert to lower case
    if(second[i]<'a')
     second[i]=second[i]+32; // convert to lower case
}

if(first>second)
 cout<<1;
else if(second>first)
cout<<-1;
else
cout<<0;



return 0;
}