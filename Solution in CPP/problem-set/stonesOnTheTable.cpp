#include<iostream>

using namespace std;

int main()
{
    int numberOfStones;
    
    cin>>numberOfStones;
    char s[numberOfStones];
    //taking input
    for(int i=0;i<numberOfStones;i++)
    {
        cin>>s[i];
    }
    
    //calculating number of stones to be removed

    int numberOfStonesToBeRemoved=0;

    for(int i=0;i<numberOfStones-1;i++)
    {
        if(s[i]==s[i+1])
         numberOfStonesToBeRemoved++;
    }
    cout<<numberOfStonesToBeRemoved;
    

    
}