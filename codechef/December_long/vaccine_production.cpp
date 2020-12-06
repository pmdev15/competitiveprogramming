#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int d1, d2, v1, v2, p;
    cin >> d1 >> v1 >> d2 >> v2 >> p;
    int ans = 0;
    int i = 1;
    while (p > 0)
    {
        if (d1 <= i)
        {
            p -= v1;
        }
        if (d2 <= i)
        {
            p -= v2;
        }
        ans++;
        i++;
    }
    cout << ans << endl;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}