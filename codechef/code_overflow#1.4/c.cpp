#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int q;
    cin >> q;
    int sum = 0;
    for (int i = 0; i < q; i++)
    {
        int n;
        cin >> n;
        ll temp = 1;
        int curr = 0;
        if (n == 1)
        {
            ll x, y;
            cin >> x >> y;
            while (y > 0)
            {
                y--;
                temp *= x;
                curr = temp % 100;
                curr /= 10;
                sum += curr;
            }
        }
        else
        {
            cout << sum % 2 << endl;
        }
    }
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}