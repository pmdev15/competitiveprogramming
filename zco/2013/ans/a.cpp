#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long ans = 0;
    for (int j = 0; j < n; j++)
    {
        for (int l = j+1; l < n; l++)
        {
            if ((arr[j] + arr[l]) < k)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    int t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}