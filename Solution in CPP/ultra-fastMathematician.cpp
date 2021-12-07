#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
	string numberOne, numberTwo;

	cin >> numberOne >> numberTwo;

	//solution
	int lengthOfTheNumber = numberTwo.length();
	char answer[lengthOfTheNumber];
	int countSame = 0, countDif = 0;
	for (int i = 0; i < lengthOfTheNumber; i++)
	{
		if (numberOne[i] == numberTwo[i])
		{
			answer[i] = '0';
			 ++countSame;
			
		}
		else
		{
			answer[i] = '1';
			++countDif;
			
		}
	}
	
	cout << string(answer).substr(0,lengthOfTheNumber);
}