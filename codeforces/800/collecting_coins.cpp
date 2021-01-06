#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll a, b, c, n;
    cin >> a >> b >> c >> n;
    ll sum = a + b + c + n;
    if (sum % 3 || sum / 3 < max(max(a, b), c) ? cout << "NO\n" : cout << "YES\n")
        ;
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