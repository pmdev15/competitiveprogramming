#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, k, x, y;
    cin >> n >> k >> x >> y;
    if (x == y)
    {
        cout << n << " " << n << endl;
    }
    if (x > y)
    {
        vector<pair<int, int>> arr;
        ll b = n - x;
        arr.emplace_back(x + b, y + b);
        arr.emplace_back(y + b, x + b);
        x = y + b;
        y = x + b;
        b = y;
        arr.emplace_back(x - b, y - b);
        arr.emplace_back(y - b, x - b);
        int i = k % 4;
        cout << arr[i].first << " " << arr[i].second << endl;
    }

    else if (y > x)
    {
        vector<pair<ll, ll>> arr1;
        ll b = n - y;
        arr1.emplace_back(x + b, y + b);
        arr1.emplace_back(y + b, x + b);
        x = y + b;
        y = x + b;
        b = y;
        arr1.emplace_back(x - b, y - b);
        arr1.emplace_back(y - b, x - b);
        ll i = k % 4;
        cout << arr1[i].first << " " << arr1[i].second << endl;
    }
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