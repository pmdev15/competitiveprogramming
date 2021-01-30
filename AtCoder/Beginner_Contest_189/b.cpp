#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define deb(x) cout << #x << "=" << x << endl

void solve()
{
    int n, x;
    cin >> n >> x;
    double sum = 0;
    int ans = 0;
    // int i = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        sum += a * b;
        // deb(sum);
        ans++;
        if (100 * x < sum)
            break;
    }
    if (sum > x)
        cout << ans << endl;
    else
        cout << -1 << endl;
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