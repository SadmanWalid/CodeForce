#include <iostream>
#include <string.h>
using namespace std;

int main()
{
     int n;
     cin>>n;
     string ar[n];
     
     for (int i = 0; i < n; i++)
     {
          cin>>ar[i];
     }

     //finding group number

     int group=0,currentIndex,nextIndex;
     char currentmegnetRightHandSign, nextMegnetLeftHandSign;
     string current,next;

     if(n==1)
      cout<<1;
     else
     {
          for (int loopIndex = 0; loopIndex < n; loopIndex++)
          {
                currentIndex=loopIndex;
                nextIndex=loopIndex+1;
                if(loopIndex!=n-1)
                {
                     
                     current=ar[loopIndex], next=ar[nextIndex];
                     currentmegnetRightHandSign= current[1]; //01 --> 1
                     nextMegnetLeftHandSign= next[0]; //01 -->0

                     if(currentmegnetRightHandSign==nextMegnetLeftHandSign)
                      group++;


                }
                if(loopIndex==n-1)
                 group++;

          }

          cout<<group;
          
     } 

     

    
     return 0;
}
