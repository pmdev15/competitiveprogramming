#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a = n * m;
    cout << a / 2 << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1, abc = 1;
    cin >> t;
    while (t--)
    {
        // cout << "Case #" << abc << ": ";
        solve();
        ++abc;
    }
    return 0;
}