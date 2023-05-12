/*------26/01/2023------*/
#include <bits/stdc++.h> //jai ganesh
using namespace std;

void solution()
{
    int n;
    cin >> n;
    string s1;
    cin >> s1;

    int sum = 0;
    for (auto i : s1)
    {
        if (i == '1')
        {
            sum++;
        }
    }
    if (s1 == "1" || s1 == "10")
    {
        cout << "No" << endl;
    }
    else if (sum <= 3)
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

    return 0;
}