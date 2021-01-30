#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + (n - 1));
    for (int i = 1; i <= n; i++)
    {
        if (arr[i-1] != i)
        {
            cout << i << endl;
            break;
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1, abc = 1;
    // cin >> t;
    while (t--)
    {
        // cout << "Case #" << abc << ": ";
        solve();
        ++abc;
    }
    return 0;
}