/*------15/02/2023------*/
#include <bits/stdc++.h> //jai ganesh
using namespace std;

void solution()
{
    int x, y, z;
    cin >> x >> y >> z;

    if ((10 * x) > y)
    {
        cout << y * z << endl;
    }
    else
    {
        cout << (10 * x * z) << endl;
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