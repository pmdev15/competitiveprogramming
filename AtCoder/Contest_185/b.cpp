#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, t;
    cin >> n >> m >> t;
    int time1, time2, mah = n;
    cin >> time1 >> time2;
    if (time1 >= n)
    {
        cout << "No" << endl;
        return;
    }
    else
    {
        mah -= time1;
        if (mah + (time2 - time1) < n)
        {
            mah += (time2 - time1);
        }
        else
        {
            mah = n;
        }
        for (int i = 1; i < m; i++)
        {
            cin >> time1;
            mah -= (time1 - time2);
            cin >> time2;
            if (mah + (time2 - time1) < n)
            {
                mah += (time2 - time1);
            }
            else
            {
                mah = n;
            }
        }
        if (mah > (t - time2))
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
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