#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long int n, ans = 0;
    cin >> n;
    while (n > 0)
    {
        if (n % 2 == 0)
            ans++;
        n /= 2;
    }
    cout << ans << endl;
}
int main()
{
    long int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}