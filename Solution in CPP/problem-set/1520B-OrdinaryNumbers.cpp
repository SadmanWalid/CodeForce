
#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        int cOrdinaryNumber = 0;

        for (ll i = 1; i <= n; i = i * 10 + 1)
        {
            for (int d = 1; d <= 9; d++)
            {
                if (i * d <= n)
                    cOrdinaryNumber++;
            }
        }
        cout << cOrdinaryNumber << endl;
    }

    return 0;
}
