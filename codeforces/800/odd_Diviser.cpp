#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve()
{
    ll n;
    cin >> n;
    bool flag = true;
    while (n > 1)
    {
        if (n % 2 == 0)
            n /= 2;
        else
        {
            flag = false;
            cout << "Yes" << endl;
            break;
        }
    }
    if (flag)
        cout << "No" << endl;
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