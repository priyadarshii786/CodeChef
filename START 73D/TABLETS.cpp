/*------here is the link of the problem https://www.codechef.com/START73D/problems/TABLETS */
/*------10/01/2023------*/
#include <bits/stdc++.h> //jai ganesh
using namespace std;

string solution(int x, int y)
{
    if (y >= 3 * x)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int x, y;
        cin >> x >> y;
        cout << solution(x, y) << endl;
        t--;
    }

    return 0;
}