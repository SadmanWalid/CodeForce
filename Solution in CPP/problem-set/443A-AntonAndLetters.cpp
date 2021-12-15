#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

	string inputString;
	getline(cin, inputString);

	// remove '{' , '}' , ',' and " "
	inputString.erase(remove(inputString.begin(), inputString.end(), '{'), inputString.end());
	inputString.erase(remove(inputString.begin(), inputString.end(), '}'), inputString.end());
	inputString.erase(remove(inputString.begin(), inputString.end(), ' '), inputString.end());
	inputString.erase(remove(inputString.begin(), inputString.end(), ','), inputString.end());

	set<char> output;
	for (int i = 0; i < inputString.length(); i++)
	{

		output.insert(inputString[i]);
	}
	cout << output.size();
}