#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    bool isHard=false;
    for (int i = 0; i <n ; i++)
    {
         cin>>ar[i];
         if(ar[i]==1)
          isHard=true;
    }

    isHard? cout<<"Hard" : cout<<"Easy";
    
}
