#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int count=0;
    for (int i = 1; i <= n; i++)
    {
        int ans = i;
        if (i <= k)
        {
            cout << ans << " ";
        }
        else
        {
            cout << -ans << " ";
        }
    }
    cout << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
