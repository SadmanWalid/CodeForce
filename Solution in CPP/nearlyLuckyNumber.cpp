#include<iostream>

using namespace std;

int main()
{
unsigned long long int n; // limit 1<=n<=10^18
cin>>n;
unsigned long long int newDividend=n;
int numberOfluckyDigits=0, remainder=0;

if(newDividend/10==0) //single digit
{
      cout<<"NO"<<endl; 
}
else  // more than one digit numbers
{
while(newDividend/10!=0)
{
    remainder=newDividend%10;
    newDividend=newDividend/10;

    if(remainder==7 || remainder==4)
     numberOfluckyDigits++;

}

remainder=newDividend%10;  
if(remainder==7 || remainder==4)
     numberOfluckyDigits++;


if(numberOfluckyDigits==7 || numberOfluckyDigits==4)
 cout<<"YES"<<endl;
else
 cout<<"NO"<<endl; 
 
}




return 0;
}
