#include <bits/stdc++.h>
using namespace std;

#define ll long long
int gcd(int a, int b)
{
    return !b ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

int hcf(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}
void solve()
{
    int ans = 0;
    int n, p;
    cin >> n >> p;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (hcf(i * j, p) == 1)
            {
                ans++;
            }
        }
    }
    cout << ans << " ";
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