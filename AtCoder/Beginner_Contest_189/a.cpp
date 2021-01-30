#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve()
{
    string s;
    cin >> s;
    if (s[0] == s[1] && s[1] == s[2] ? cout << "Won" : cout << "Lost")
        ;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1, abc = 1;
    // cin >> t;
    while (t--)
    {
        // cout << "Case #" << abc << ": ";
        solve();
        ++abc;
    }
    return 0;
}