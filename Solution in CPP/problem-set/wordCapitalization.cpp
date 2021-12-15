#include<iostream>

using namespace std;

int main()
{
string s;
cin>>s;

int FirstLetterIntValue=int(s[0]);
if(FirstLetterIntValue>=97 && FirstLetterIntValue<=122)
{
    s[0]=char(FirstLetterIntValue-32);
}

cout<<s;
 


}