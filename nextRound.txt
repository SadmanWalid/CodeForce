#include<iostream>
using namespace std;

int main()
{
  int n,k;
  cin>>n>>k;
  int scores[n];
  //taking input scores
  for(int i=0;i<n;i++)
  {
      cin>>scores[i];
  }
  //calculate output
  int nopToNextRound=0, kthScore=scores[k-1];
  for(int i=0;i<n;i++)
  {
      if(scores[i]>0 && scores[i]>=kthScore)
      nopToNextRound++;
  }
  cout<<nopToNextRound;



return 0;
}