
#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main()
{
    int n;
    cin >> n;

    ll pre = 1, temp = 0, sum = 1;

    do
    {
        temp++;
        pre = pre + temp + 1;
        sum += pre;

    } while (sum <= n);

    // cout<<"sum "<<sum<<" temp "<<temp;
    cout << temp;

    return 0;
}
