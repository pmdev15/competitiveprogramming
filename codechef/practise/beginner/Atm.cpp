#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    double m;
    cin >> n;
    cin >> m;

    if (n % 5 == 0 && (double)n + 0.5 < m)
    {
        double ans = m - (n + 0.50);
        cout << fixed << ans << setprecision(2) << endl;
    }
    else
    {
        cout << fixed << m << setprecision(2) << endl;
    }
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