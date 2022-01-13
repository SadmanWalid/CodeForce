
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int r = 0, i = 1;
        while (r != n)
        {
            if (i % 3 != 0)
            {
                if (i % 10 != 3)
                    r++;
            }

            i++;
        }
        cout << i - 1 << endl;
    }

    return 0;
}
