#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
void solve()
{
    int l, w, h, n;
    cin >> l >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> w >> h;
        if (w < l || h < l)
        {
            cout << "UPLOAD ANOTHER" << endl;
        }
        else
        {
            if (w == h)
            {
                cout << "ACCEPTED" << endl;
            }
            else
            {
                cout << "CROP IT" << endl;
            }
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