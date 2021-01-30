#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag = true;
    int ans = 0;
    for (int i = 0; i < n;)
    {
        if (arr[i] == 0)
        {
            flag = false;
            cout << -1 << endl;
            break;
        }
        i += arr[i];
        ans++;
        if (i >= n-1)
        {
            break;
        }
    }
    if (flag)
    {
        cout << ans << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1, abc = 1;
    cin >> t;
    while (t--)
    {
        // cout << "Case #" << abc << ": ";
        solve();
        ++abc;
    }
    return 0;
}