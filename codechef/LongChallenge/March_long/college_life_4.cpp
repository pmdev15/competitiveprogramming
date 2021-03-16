#include <bits/stdc++.h>
using namespace std;

#define ios                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long
#define endl "\n"

void solve()
{
    int n, e, h, a, b, c, index1, index2, o, k, i;
    cin >> n >> e >> h >> a >> b >> c;
    std::vector<int> v;
    std::vector<int> v1;
    for (int i = 0; i <= n + 1; i++)
    {
        v1.push_back(i);
    }
    for (int i = 0; i <= n; i++)
    {
        index1 = lower_bound(v1.begin(), v1.end(), (2 * n - e - 2 * i)) - v1.begin();
        index2 = upper_bound(v1.begin(), v1.end(), (h - 3 * i)) - v1.begin() - 1;

        if (index2 < index1 or index1 == n + 1)
        {
            continue;
        }
        if (index2 == n + 1 and index2 + 3 * i > h)
        {
            continue;
        }
        if (c > a)
        {
            k = (index1 < (n - i) ? index1 : (n - i));
        }
        else
        {
            k = (index2 < (n - i) ? index2 : (n - i));
        }
        o = n - k - i;
        if (k + 2 * i >= 2 * n - e and k + 3 * i <= h)
        {
            v.push_back(a * o + b * i + c * k);
        }
    }
    if (v.size() == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        ll minn = v[0];
        for (ll j = 0; j < v.size(); j++)
        {
            if (v[j] < minn)
            {
                minn = v[j];
            }
        }
        cout << minn << endl;
    }
}
int main()
{
    ios int t = 1, abc = 1;
    cin >> t;
    while (t--)
    {
        solve();
        ++abc;
    }
    return 0;
}