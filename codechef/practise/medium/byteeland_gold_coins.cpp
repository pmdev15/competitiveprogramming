#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    int i = 2;
    while (n % i == 0)
    {
        ans += (n / i);
        i++;
    }
    if (n == 2 || n == 3 || n<10)
    {
        cout << n << endl;
    }
    else
    {
        cout << ans << endl;
    }
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