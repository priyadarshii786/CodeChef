/*------01/02/2023------*/
#include <bits/stdc++.h> //jai ganesh
using namespace std;

void solution()
{
    int x, y, z;
    cin >> x >> y >> z;
    /*------using the concept from the sample space------*/
    if ((x + y + z) >= 6)
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