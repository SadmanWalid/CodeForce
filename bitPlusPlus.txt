#include<iostream>
//#include<string>
using namespace std;

int main()
{
 
 int n,x=0;
 cin>>n;
 string operations[n];
 //taking input
 int i=0;
 while(i<n)
 {
   cin>>operations[i++];
 }
 //performing operation statements
for(int i=0;i<n;i++)
{
    
    if(operations[i]=="++X"||operations[i]=="X++")
    x++;
    else
    x--;
}
cout<<x;
return 0;
}