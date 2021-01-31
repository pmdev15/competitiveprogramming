#include <bits/stdc++.h>
using namespace std;

#define ios                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int ans = 0, noeven = 0, noodd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            noeven++;
        else
            noodd++;
    }
    // for (int i = 0; i < n - 1; i++)
    // {
    //     // if (abs(arr[i] - arr[i + 1]) % 2 != 0)
    //     // {
    //     //     arr[i + 1]++;
    //     //     ans++;
    //     // }
    // }
    // cout << ans << endl;
    noeven < noodd ? cout << noeven << endl : cout << noodd << endl;
}
int main()
{
    ios int t = 1, abc = 1;
    cin >> t;
    while (t--)
    {
        // cout << "Case #" << abc << ": ";
        solve();
        ++abc;
    }
    return 0;
}