/*------11/01/2023------*/
#include <bits/stdc++.h> //jai ganesh
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int x;
        cin >> x;
        int count = 0;
        while (x > 0)
        {
            int rem = x % 10;

            if (rem == 7)
            {
                count++;
            }

            x = x / 10;
        }
        if (count >= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        t--;
    }

    return 0;
}