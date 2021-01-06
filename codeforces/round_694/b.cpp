#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> arr;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        arr.push_back(a);
    }
    ll sum = 0;
    for (ll j = 0; j < n; j++)
    {
        // sum += arr[j];
        if ((arr[j] / x) % x == 0)
        {
            // while (arr[j] > 0)
            // {
            //     if (arr[j] % x == 0)
            //     {
            //         sum += 2 * arr[j];
            //     }
            //     arr[j] = arr[j] / x;
            // }
            sum += arr[j] * 3;
        }
        else
        {
            sum += arr[j] * 2;
        }
    }
    cout << sum << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}