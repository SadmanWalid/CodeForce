
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int dab;
        if (a == b)
            cout << "0" << endl;
        else if (a > b)
        {
            dab = abs(a - b);
            if (dab % 2 == 0)
                cout << "1" << endl;
            else
                cout << "2" << endl;
        }
        else
        {
            dab = abs(a - b);
            if (dab % 2 == 0)
                cout << "2" << endl;
            else
                cout << "1" << endl;
        }
    }

    return 0;
}
