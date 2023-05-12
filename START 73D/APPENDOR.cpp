/*------11/01/2023------*/
#include <bits/stdc++.h> //jai ganesh
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int a, y;
        cin >> a >> y;

        int count = 0;
        int arr[a];

        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < a; i++)
        {
            count = count | arr[i];
        }

        int x = y - count;

        if ((x & y) == x)
        {
            cout << x << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
        t--;
    }

    return 0;
}