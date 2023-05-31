#include <bits/stdc++.h> //jai ganesh
using namespace std;

void solution()
{
    int w, l;
    cin >> w >> l;

    int x = ((w * 2) + 2) % 4;
    int y = ((l * 2) + 2) % 4;

    if (x != 0 || y != 0)
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