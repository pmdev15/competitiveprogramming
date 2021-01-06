#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int w, h;
    cin >> w >> h;
    long long n;
    cin >> n;
    int c = 1;
    while (w % 2 == 0)
    {
        w /= 2;
        c *= 2;
    }
    while (h % 2 == 0)
    {
        h /= 2;
        c *= 2;
    }
    n <= c ? cout << "YES\n" : cout << "NO\n";
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