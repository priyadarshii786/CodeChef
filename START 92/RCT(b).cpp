#include <bits/stdc++.h> //jai ganesh
using namespace std;

void solution()
{
    int w, l;
    cin >> w >> l;

    if (w % 2 == 0 || l % 2 == 0)
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