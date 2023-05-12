/*---------Here is the link of the problem https://www.codechef.com/START72D/problems/INDIVISIBLE ----------*/
/*------04/01/2023------*/
#include <bits/stdc++.h> //jai ganesh
using namespace std;

int solution(int a, int b, int c)
{
    for (int i = 2; i <= 100; i++)
    {
        if (a % i != 0)
        {
            if (b % i != 0)
            {
                if (c % i != 0)
                {
                    return i;
                }
            }
        }
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