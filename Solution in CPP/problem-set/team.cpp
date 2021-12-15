#include<iostream>
using namespace std;

int main()
{
  int numberOfProblems;
  cin>>numberOfProblems;
  int solution[numberOfProblems][3];
  //inserting values
  for(int i=0;i<numberOfProblems;i++)
  {
      for(int j=0;j<3;j++)
      {
          cin>>solution[i][j];
      }

  }
  //finding number of problems to be solved
  int numberOfProblemsToBeSolved=0;
  int count=0;
  for(int i=0;i<numberOfProblems;i++)
  {
      count=0;
      for(int j=0;j<3;j++)
      {
            if(solution[i][j]==1)
             count++;

      }
      if(count>1)
       numberOfProblemsToBeSolved++;

   

  }
  cout<<numberOfProblemsToBeSolved;


return 0;
}