#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int numberOfLayer;
    cin >> numberOfLayer;

    string output;
    if (numberOfLayer == 1)
        cout << "I hate it";
    else
    {
        for (int i = 0; i < numberOfLayer; i++)
        {
            if (i % 2 == 0)
            {
                output.append("I hate ");
            }
            else
            {
                output.append("I love ");
            }

            if (i == numberOfLayer - 1)
            {
                output.append("it ");
            }
            else
            {
                output.append("that ");
            }
        }
    }

    cout << output;
}