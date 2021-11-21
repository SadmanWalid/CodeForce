#include <iostream>
#include <string.h>
using namespace std;

int main()
{
     long long int n, result=0,numberOfOdd,numberOfEven;
     cin >> n;
    
     if(n%2==0)
      numberOfEven=numberOfOdd=n/2;
     else
      {
           numberOfEven=numberOfOdd = (n-1)/2;
           numberOfOdd++;
      } 
      result= numberOfEven*(numberOfEven+1)-(numberOfOdd*numberOfOdd); // sum of n even number = n(n+1); sum of n odd number from 1 = n^2
     cout<<result;
     return 0;
}

another solution========================
/*
#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
     long long int n, result=0;
     cin >> n;
    
     if(n%2==0)
      result =n/2;
     else
      result= -(n+1)/2;
    cout<<result;
     return 0;
}
*/