#include <bits/stdc++.h>
using namespace std;

#define ios                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long
#define endl "\n"

void solve()
{
    int n, h, x;
    cin >> n >> h >> x;
    int t;
    bool flag = false;
    while (n--)
    {
        cin >> t;
        if (x + t >= h)
        {
            flag = true;
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    ios int t = 1, abc = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        ++abc;
    }
    return 0;
}