#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve()
{
    ll n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a = arr[0];
    cout << count(arr, arr + n, a) << endl;
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