
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y, w;
    cin >> y >> w;
    int maxyw = max(y, w);
    int n = (6 - (maxyw - 1));
    int d = 6;
    int gcdd = __gcd(n, d);

    cout << n / gcdd << "/" << 6 / gcdd;
    return 0;
}
