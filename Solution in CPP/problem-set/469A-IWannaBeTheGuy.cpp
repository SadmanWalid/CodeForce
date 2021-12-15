#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
	set<int> numberOflevelsAbleToPass;
	int levels, p, q;
	cin >> levels >> p;
	int inputp[p];
	for (int i = 0; i < p; i++)
	{
		cin >> inputp[i];
		numberOflevelsAbleToPass.insert(inputp[i]);
	}
	cin >> q;
	int inputq[q];
	for (int i = 0; i < q; i++)
	{
		cin >> inputq[i];
		numberOflevelsAbleToPass.insert(inputq[i]);
	}

	if (levels - numberOflevelsAbleToPass.size() == 0)
		cout << "I become the guy.";
	else
	 cout<<"Oh, my keyboard!";
}