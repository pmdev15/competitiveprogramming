#include <bits/stdc++.h>
using namespace std;

#define ios                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long
#define endl "\n"

void solve()
{
    // ll x;
    // cin>>x;
    // if(x%2==0) cout<<0<<endl;
    // else cout<<1<<endl;
    // string s[1000000];
    // int i = 0;
    // while (true)
    // {
    //     cin >> s[i];
    //     if (s[i] == "\n")
    //         break;
    //     i++;
    // }
    // cout << s[i-1].length() << endl;
    // ll n;
    // cin >> n;
    // ll ans = 0;
    // for (ll i = 1; i < n; i++)
    // {
    //     if (__gcd(i, n) == 1)
    //         ans++;
    // }
    // cout << ans << endl;
    ll n;
    cin >> n;
    ll result = n;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    cout << result << endl;
}

int main()
{
    ios int t = 1, abc = 1;
    cin >> t;
    while (t--)
    {
        // cout << "Case #" << abc << ": ";
        solve();
        ++abc;
    }
    return 0;
}