#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
void solve()
{
    ll n, q, l, r;
    cin >> n >> q;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll sum = 0;
    for (ll j = 0; j < q; j++)
    {
        cin >> l >> r;
        for (ll k = l - 1; k < r; k++)
        {
            sum += arr[k];
        }
        cout<<floor(sum/abs((l-1)-r))<<"\n";
        sum=0;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}