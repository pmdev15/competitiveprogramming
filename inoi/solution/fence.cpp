#include <bits/stdc++.h>
using namespace std;

#define ios                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long
#define endl "\n"
const int maxn = 1e6;

void solve()
{
    int r, c, n;
    cin >> r >> c >> n;
    // char arr[r][c];
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         arr[i][j] = '.';
    //     }
    // }
    int arr[r][c];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[a - 1][b - 1] = 1;
    }
    vector<vector<int>> dp(r, vector<int>(c));
    int answer = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 1)
            {
                dp[i][j] = 1;
                if (i > 0 and j > 0)
                {
                    dp[i][j] += min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
                }
                answer = max(answer, dp[i][j]);
            }
        }
    }
    cout << answer << endl;
}
int main()
{
    ios int t = 1, abc = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        ++abc;
    }
    return 0;
}