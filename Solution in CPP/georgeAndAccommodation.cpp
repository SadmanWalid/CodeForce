#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n,p,q;

    cin>>n;
    int pAr[n],qAr[n];
    for(int i=0;i<n;i++)
    {
         cin>>p>>q;
         pAr[i] = p;
         qAr[i] = q;
    }

    int count=0;

    for(int i=0;i<n;i++)
    {
         if(qAr[i]-pAr[i]>=2)
          count++;
    }

    cout<<count<<endl;
   

    



     return 0;
}
