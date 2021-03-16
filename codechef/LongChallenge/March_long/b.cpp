#include <bits/stdc++.h>
using namespace std;

#define ios                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long
#define endl "\n"

void solve()
{
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            while (s[i])
            {
                if (s[i] == '1')
                {
                    i++;
                    continue;
                }
                else
                {
                    break;
                }
            }
            ans++;
        }
    }
    cout << ans << endl;
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