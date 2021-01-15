#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve()
{
    int n, b;
    cin >> n >> b;
    int arr[n];
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int j = 0; j < n; j++)
    {
        if (b >= arr[j])
        {
            ans++;
            b -= arr[j];
        }
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1, i = 1;
    cin >> t;
    while (t--)
    {
        cout << "Case #" << i << ": ";
        solve();
        i++;
    }
}
