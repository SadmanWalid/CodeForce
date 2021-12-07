#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
         cin>>ar[i];
    }


    
    
 
    int c=0,out[n], t=n;
    while(t--)
    {
         for (int i=0;  i <n ; i++)
         {
              if(ar[i]==c+1)
               out[c]=i+1;
         }
         c++;
        
         

    }
    for (int i = 0; i < n; i++)
    {
         cout<<out[i]<<" ";
    }
    
    
    
     return 0;
}
