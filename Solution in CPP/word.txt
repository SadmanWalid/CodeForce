#include<iostream>

using namespace std;

int main()
{
string s;
cin>>s;
int l=s.length(),countUpperCase=0,countLowerCase=0;
for(int i=0;i<l;i++)
{
    if(int(s[i])>96&&int(s[i])<123)
     countLowerCase++;
}
countUpperCase=l-countLowerCase;
//convert to lower or upper case
if(countUpperCase>countLowerCase)
{
    for(int i=0;i<l;i++)
    {
        if(int(s[i])>96&&int(s[i])<123) //if lower case
          s[i]= char(int(s[i])-32); //convert to upper case; A=65, a=97 difference 32
    }
}
else
{
    for(int i=0;i<l;i++) 
    {
        if(int(s[i])>64&&int(s[i])<91) //if upper case
         s[i]= char(int(s[i])+32); //convert to lower case; A=65, a=97 difference 32
    }
}
 
cout<<s;
return 0;
}
