#include<iostream>

using namespace std;

int main()
{

string s,t;
cin>>s>>t;

int l=s.length();
int sIndex=0,tIndex=l-1;
bool isCorrect=true;
while(l--)
{ 
     if(s[sIndex++]!=t[tIndex--])
      {
           isCorrect = false;
           break;
      }
}
if(isCorrect)
 cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
return 0;
}
