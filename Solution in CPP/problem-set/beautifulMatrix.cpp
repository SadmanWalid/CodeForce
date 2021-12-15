#include<iostream>

using namespace std;

int main()
{

int matrix[5][5];

//takng input
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
     cin>>matrix[i][j];

}

//calculating steps number to center 1
int numberOfSteps=0, ithPosition,jthPosition;
 //finding position of 1
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
         if(matrix[i][j]==1)
         {
             ithPosition=i;
             jthPosition=j;
         }
    }     
}

while(ithPosition!=2 ||jthPosition!=2)
{   //ithPositon
    if(ithPosition>2)
     {
         ithPosition--;
         numberOfSteps++;
     }
     else if (ithPosition<2)
     {
         ithPosition++;
         numberOfSteps++;
     }
     //jthPosition
     if(jthPosition>2)
     {
         jthPosition--;
         numberOfSteps++;
     }
     else if (jthPosition<2)
     {
         jthPosition++;
         numberOfSteps++;
     }
}

cout<<numberOfSteps;

return 0;
}