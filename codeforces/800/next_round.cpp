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
    int min = arr[k-1];
    int ans = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] >= min && arr[j]>0)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}