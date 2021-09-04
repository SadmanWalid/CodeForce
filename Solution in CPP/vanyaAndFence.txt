#include <iostream>
#include <string.h>
using namespace std;

int main()
{
     int n,h;
     cin>>n>>h;
     int ar[n];

     for(int i=0;i<n;i++)
     {
          cin>>ar[i];
     }
     
     int count=0;
     for(int i=0;i<n;i++)
     {
          if(ar[i]>h)
           count++;
     }
     cout<<n+count<<endl;


     return 0;
}
