/*------15/02/2023------*/
#include <bits/stdc++.h> //jai ganesh
using namespace std;

void solution()
{
    int a, b, c;
    cin >> a >> b >> c;

    int fight = min(b, c);
    b = b - fight;
    c = c - fight;

    if (b < c)
    {
        a = a - b;
        b = b - b;

        if (a > c)
        {
            cout << "YES" << endl;
            // continue;
        }

        else
        {
            cout << "NO" << endl;
            // continue;
        }
    }

    else
    {
        a = a - c;
        c = c - c;

        if (a > b)
        {
            cout << "YES" << endl;
            // continue;
        }

        else
        {
            cout << "NO" << endl;
            // continue;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        solution();
        t--;
    }

    return 0;
}