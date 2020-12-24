#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
    cin >> n;
    int ans = 0;
    int i = 0;
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            ans++;
        }
        n = n / 2;
        i++;
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
    return 0;
}