/*------07/02/2023------*/
#include <bits/stdc++.h> //jai ganesh
using namespace std;

void solution()
{
    int n;
    cin >> n;

    int i = 2;
    while (i <= n)
    {
        cout << i << " ";
        i++;
    }
    cout << 1 << endl;
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
    // your code goes here

    return 0;
}