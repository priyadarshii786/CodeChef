/*-------here is the link of the problem https://www.codechef.com/START73D/problems/LUDO */
/*------11/01/2023------*/
#include <bits/stdc++.h> //jai ganesh
using namespace std;

string solution(int x)
{
    if (x >= 6)
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
        int x;
        cin >> x;
        cout << solution(x) << endl;
        t--;
    }

    return 0;
}