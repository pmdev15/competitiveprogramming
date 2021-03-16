#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define file false
void fast();
void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[k];
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int ans = 0;
        for (int j = 0; s[j]; j++)
        {

            if (s[j] == '1')
            {
                ans += arr[j];
            }
        }

        cout << ans << endl;
    }
}
int main()
{
    fast();
    clock_t begin = clock();
    int t = 1, abc = 1;
    cin >> t;
    while (t--)
    {
        solve();
        ++abc;
    }
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << " \nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
    return 0;
}
void fast()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (file)
    {
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif
    }
}