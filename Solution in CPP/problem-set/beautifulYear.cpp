#include <iostream>
#include <string.h>
using namespace std;

int main()
{
     int y;
     cin >> y;
     y++;
     string s = std::to_string(y);
    
     int l = s.length();

     bool isNotDistint = true;
     while (isNotDistint)
     {
          for (int i = 0; i < l; i++)
          {
               for (int j = 0; j < l; j++)
               {
                    if (s[i] == s[j] && i != j)
                    {
                         isNotDistint = true;
                         break;
                    }
                    else
                     isNotDistint=false;
               }
               if (isNotDistint)
                    break;
          }
            
           if(isNotDistint) 
           {   y++;
               s = std::to_string(y);
           }
           
             
           
     }

     cout<<s;

     return 0;
}
