/*------26/01/2023------*/
#include <bits/stdc++.h> //jai ganesh
using namespace std;

void solution()
{
    int x, y;
    cin >> x >> y;

    int cp = (x - y);
    int sp = (x + x / 10);

    cout << (sp - cp) << endl;
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