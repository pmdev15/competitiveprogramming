#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        if (lastdigit == 4)
        {
            ans++;
        }
        n = n / 10;
    }
    cout << ans << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}