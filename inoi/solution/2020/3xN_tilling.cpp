#include <bits/stdc++.h>
using namespace std;

#define ios                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long
#define endl "\n"
const int mod = 1e9 + 7, N = 1e6 + 5;
int dp[N], dpf[N], dpg[N], dph[N];

int multi(int a, int b)
{
    int res = (a * 1LL * b) % mod;
    if (res < 0)
        res += mod;
    return res;
}
int add(int a, int b)
{
    int res = (a + b) % mod;
    if (res < 0)
        res += mod;
    return res;
}
int solve2(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    dp[n] = add(solve2(n - 2), solve2(n - 3));
    return dp[n];
}
int solvef(int n);
int solveg(int n);
int solveh(int n);

int solvef(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    if (dpf[n] != -1)
        return dpf[n];
    dpf[n] = add(add(solvef(n - 1), multi(2, solveg(n - 2))), solvef(n - 3));
    return dpf[n];
}

int solveg(int n)
{
    if (n <= 2)
        return 0;
    if (dpg[n] != -1)
        return dpg[n];
    dpg[n] = add(solveg(n - 3), solvef(n - 2));
    return dpg[n];
}
int solveh(int n)
{
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (dph[n] != -1)
        return dpg[n];
    dph[n] = add(solvef(n - 2), solveh(n - 3));
    return dph[n];
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    memset(dpf, -1, sizeof(dp));
    memset(dpg, -1, sizeof(dp));
    memset(dph, -1, sizeof(dp));
    int k, n;
    cin >> k >> n;
    if (k == 1)
    {
        if (n % 3 == 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    else if (k == 2)
    {
        cout << solve2(n) << endl;
    }
    else if (k == 3)
    {
        cout << solvef(n) << endl;
    }
}
int main()
{
    ios int t = 1, abc = 1;
    cin >> t;
    while (t--)
    {
        solve();
        ++abc;
    }
    return 0;
}