#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int sum1 = 0, sum2 = 0;
    while (n > 0)
    {
        sum1 += n % 10;
        n /= 10;
    }
    while (m > 0)
    {
        sum2 += m % 10;
        m /= 10;
    }
    if (sum1 > sum2 ? cout << sum1 : cout << sum2)
        ;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}