#include <bits/stdc++.h>
using namespace std;

#define ios                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int maxx = 1;
    for (int i = 1; i < 11; i++)
    {
        if (n % i == 0)
            maxx = max(maxx, i);
    }
    cout << maxx << endl;
}
int main()
{
    ios int t = 1, abc = 1;
    // cin >> t;
    while (t--)
    {
        // cout << "Case #" << abc << ": ";
        solve();
        ++abc;
    }
    return 0;
}