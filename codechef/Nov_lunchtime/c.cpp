#include <bits/stdc++.h>
using namespace std;

void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin>>t;
    while (t--)
    {
        int x, y, n;
        cin>>x>>y>>n;
        int ans = 0;
        for (int i = 0; i <= n; i++)
        {
            if ((x ^ i) < (i ^ y))
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}