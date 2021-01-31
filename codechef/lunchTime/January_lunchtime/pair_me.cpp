#include <bits/stdc++.h>
using namespace std;

#define ios                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long
#define endl "\n"

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;
    if (a + b == c)
        flag = true;
    else if (a + c == b)
        flag = true;
    else if (b + c == a)
        flag = true;

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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