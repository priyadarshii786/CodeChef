/*--------here is the link of the problem https://www.codechef.com/START72D/problems/SUMM?tab=statement---------*/
/*------04/01/2023------*/
#include <bits/stdc++.h> //jai ganesh
using namespace std;

string solution(int a, int b, int c)
{
    int x = a + b;
    if (x == c)
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
        int a, b, c;
        cin >> a >> b >> c;
        cout << solution(a, b, c) << endl;
        t--;
    }

    return 0;
}