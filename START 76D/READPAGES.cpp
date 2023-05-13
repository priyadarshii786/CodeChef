/*------01/02/2023------*/
#include <bits/stdc++.h> //jai ganesh
using namespace std;

void solution()
{
    int n, x, y;
    cin >> n >> x >> y;

    if ((x * y) >= n)
        cout << "Yes" << endl;

    else
        cout << "No" << endl;
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