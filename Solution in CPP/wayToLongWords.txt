#include<iostream>
#include<string>
using namespace std;

int main()
{
    int numberOfWords;
    cin>>numberOfWords;
    string words[numberOfWords];
    char firstLast[2];
    //taking input
    for(int i=0;i<numberOfWords;i++)
    {
        cin>>words[i];
        
    }
    //abbrebiating
    for(int i=0;i<numberOfWords;i++)
    {
       int l=words[i].length();
       if(l>10)
         {
             string s= words[i];
             firstLast[0]=s[0];
             firstLast[1]=s[l-1];
             string temp=to_string(l-2);
            
            s=firstLast[0];
            s+=temp;
            s+=firstLast[1];
            
            cout<<s<<endl;
         }
      else
      cout<<words[i]<<endl;
    }

   
return 0;
}