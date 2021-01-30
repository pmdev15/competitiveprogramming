#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve()
{
    ll p, i, m, r;
    cin >> p >> i >> m >> r;
    int ans = 0;
    while (r > 0)
    {
        if (r - p > 0)
        {
            ans++;
        }
        r -= p;
        if (ans >= m)
        {
            p = m;
        }
        else
        {
            p -= i;
        }
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1, abc = 1;
    // cin >> t;
    while (t--)
    {
        // cout << "Case #" << abc << ": ";
        solve();
        ++abc;
    }
    return 0;
}