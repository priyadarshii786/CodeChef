#include <bits/stdc++.h> //jai ganesh
using namespace std;

void solution()
{
    int b1, b2, b3;
    cin >> b1 >> b2 >> b3;

    int sum = b1 + b2 + b3;

    if (sum < 2)
        cout << "Water filling time" << endl;

    else
        cout << "Not now" << endl;
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