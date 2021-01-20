#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve()
{
    cout << ((1 ^ 2) ^ 3) << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1, abc = 1;
    cin >> t;
    while (t--)
    {
        cout << "Case #" << abc << ": ";
        solve();
        ++abc;
    }
    return 0;
}