#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n   ;
    cin >> n;
    int arr[n];
    for (int ab = 0; ab < n; ab++)
    {
        cin >> arr[ab];
    }
    sort(arr, arr + n);
    int ans = 0, np = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= np)
        {
            ans++;
            np++;
        }
    }
    cout << ans << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}