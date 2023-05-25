#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, k, l;
    cin >> t;
    while (t--)
    {
        char s1[100001], s2[100001];
        cin >> k >> l >> s1 >> s2;

        int freq[128] = {0};
        if (l > k)
        {
            int temp = k;
            k = l;
            l = temp;

            char tempstr[100001];
            strcpy(tempstr, s1);
            strcpy(s1, s2);
            strcpy(s2, tempstr);
        }
        for (int i = 0; i < k; i++)
        {
            freq[s1[i]]++;
        }
        for (int i = 0; i < l; i++)
        {
            freq[s2[i]]--;
        }

        int flag = 1, count = 0, diff = k - l;
        for (int i = 0; i < 128; i++)
        {
            if (freq[i] < 0)
            {
                flag = 0;
                break;
            }
            if (freq[i] % 2 == 0)
            {
                continue;
            }
            if (count)
            {
                flag = 0;
            }
            else
            {
                count = 1;
            }
        }

        if (flag)
            cout << "yes" << endl;

        else
            cout << "no" << endl;
    }
    return 0;
}