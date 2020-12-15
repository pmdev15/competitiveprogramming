#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int more = INT_MAX;
    int n;
    while (cin >> n)
    {
        if (more > n && n > 0)
        {
            more = n;
        }
    }
    cout<<more<<endl;;
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