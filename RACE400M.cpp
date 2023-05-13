/*------01/02/2023------*/
#include <bits/stdc++.h> //jai ganesh
using namespace std;

void solution()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (x < y && x < z)
        cout << "Alice" << endl;

    else if (y < x && y < z)
        cout << "Bob" << endl;

    else
        cout << "Charlie" << endl;
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