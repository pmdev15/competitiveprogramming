#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define file false
const int mod = 1e9 + 7, mxN = 1e6;
int n;
ll dp[mxN + 1];
int main()
{
    cin >> n;
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= min(6, i); j++)
        {
            dp[i] = (dp[i] + dp[i - j]) % mod;
        }
    }
    cout << dp[n];
    return 0;
}
