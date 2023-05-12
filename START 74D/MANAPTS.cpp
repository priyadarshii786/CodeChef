/*------18/01/2023------*/
#include <bits/stdc++.h> //jai ganesh
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int x, y;
        cin >> x >> y;
        int ans = y / x;
        cout << ans << endl;

        t--;
    }

    return 0;
}