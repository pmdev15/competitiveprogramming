#include <bits/stdc++.h>
using namespace std;

#define ios                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long
#define endl "\n"

void solve()
{
    ll n;
    cin >> n;
    ll temp = 0, odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp % 2 == 0)
            even++;
        else
            odd++;
    }
    if (odd % 2 == 1)
        cout << "2\n";
    else
        cout << "1\n";
}
int main()
{
    ios int t = 1, abc = 1;
    cin >> t;
    while (t--)
    {
        // cout << "Case #" << abc << ": ";
        solve();
        ++abc;
    }
    return 0;
}