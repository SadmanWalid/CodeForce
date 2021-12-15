#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
	set<int> shoes;
	int input[4];
	for (int i = 0; i < 4; i++)
	{
		cin>>input[i];
		shoes.insert(input[i]);
	}
	cout<<4-shoes.size();
}