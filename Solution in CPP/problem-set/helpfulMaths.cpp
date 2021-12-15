#include<iostream>

using namespace std;

int main()
{
string s;
cin>>s;

int lengthOftheString=s.length();
if(lengthOftheString>2)
{
int numberOfDigits,iterator=0;
numberOfDigits = (lengthOftheString-2)/2+2;
int digits[numberOfDigits];

//storing digits in digit array
for(int i=0;i<lengthOftheString;i++)
{
    if(s[i]!='+')
     digits[iterator++]=(int)s[i]-48;  //character '1' 's  integer value is 49, so 49-48=1
}


//sort digits in ascending order
int count=0,temp;
while(count<numberOfDigits)
{
  //loop through digit 
  for(int i=0;i<numberOfDigits;i++)
  {
      if(digits[count]<digits[i])
      {
          temp=digits[i];
          digits[i]=digits[count];
          digits[count]=temp;
      }
  }
  count++;
}

//modify string s 
iterator=0;
 for(int i=0;i<lengthOftheString;i++)
{
    if(s[i]!='+')
     s[i] = digits[iterator++]+48; //
}
}

cout<<s;



}