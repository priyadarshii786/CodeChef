/*------08/02/2023------*/
#include <bits/stdc++.h> //jai ganesh
using namespace std;

void solution()
{
    int a, b, c, x;
    cin >> a >> b >> c >> x;

    if (a + b >= x || b + c >= x || c + a >= x)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;
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
    // your code goes here

    return 0;
}