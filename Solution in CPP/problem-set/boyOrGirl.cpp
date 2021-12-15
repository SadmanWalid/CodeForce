#include<iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int lengthOfTheString=s.length();
    //storing number of characters in count array
    int count[lengthOfTheString];
    for (int i = 0; i < lengthOfTheString; i++)
    {
        int charCount=0;
        for (int j = 0; j < lengthOfTheString; j++)
        {
            if(s[i]==s[j])
             count[i]=++charCount;

        }
        
    }
  
    // //temp
    // for (int j = 0; j < lengthOfTheString; j++)
    //     {
    //         cout<<count[j];
    //     }
    //  cout<<endl;
    //counting distint characters from count array, method to find distint characters = (numberOfOccurance*number)/(number*number)
    int number=1, numberOfOccuracne=0,distintCharacter=0;
    
    while(number<lengthOfTheString)
    {
     for(int i=0;i<lengthOfTheString;i++)
    {
        if(count[i]==number)
         numberOfOccuracne++;

    }
     
      if(numberOfOccuracne>=1)
      {
          distintCharacter+= (numberOfOccuracne*number)/(number*number); //to find distint characters
          

      }
      numberOfOccuracne=0;
      number++;

    }

    //printing output
    
    if(distintCharacter%2==0)
     cout<<"CHAT WITH HER!";
    else
     cout<<"IGNORE HIM!"; 

    
    


}
