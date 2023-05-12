/*----------here is the link of the problem https://www.codechef.com/START72D/problems/APPLEORANGE ---------*/
/*------04/01/2023------*/
#include <bits/stdc++.h> //jai ganesh
using namespace std;
int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}
int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		int m, n;
		int hcf = 1, max, r;
		cin >> n >> m;
		int i = 1;
		hcf = gcd(m, n);
		cout << hcf << endl;

		t--;
	}
	return 0;
}