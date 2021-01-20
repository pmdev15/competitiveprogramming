#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve()
{
    int n, k;
    cin >> n >> k;
    int inp, risk = 0, nrisk = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> inp;
        if (inp <= 9 || inp >= 80)
        {
            risk++;
        }
    }
    nrisk = n - risk;
    int ans = 0;
    while (k > 0 && risk > 0)
    {
        risk -= k;
        ans++;
    }
    while (k > 0 && nrisk > 0)
    {
        nrisk -= k;
        ans++;
    }
    if (k != 0)
    {
        cout << ans << endl;
    }
}
int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}