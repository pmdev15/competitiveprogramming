#include <bits/stdc++.h>
using namespace std;

// #define ios                  \
//     ios::sync_with_stdio(0); \
//     cin.tie(0);
#define ll long long
#define endl "\n"
const int mod = 1e9 + 7;

void solve1() // dp approach
{
    int n, m;
    cin >> n >> m;
    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int dp[m + 1] = {0};
    dp[0] = 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > i)
                continue;
            dp[i] = (dp[i] + dp[i - arr[j]]) % mod;
        }
    }
    cout << dp[m] % mod;
}
int main()
{
    solve1();
    return 0;
}