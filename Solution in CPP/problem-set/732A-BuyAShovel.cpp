
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int k, r;
	cin >> k >> r;

	if (k % 10 == 0 || (k - r) % 10 == 0)
		cout << "1" << endl;
	else{
		int n=2;
		bool continueLoop=true;
		while(continueLoop){

			if((k*n)%10==0 || (k*n)%10==r)
			{
				cout<<n<<endl;
				break;
			}
			n++;
		}

	}

		return 0;
}
