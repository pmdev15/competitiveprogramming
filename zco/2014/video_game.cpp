#include <bits/stdc++.h>
using namespace std;
int n, h;
int plc = 0;
bool flag = false;

void solve()
{
    cin >> n >> h;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long cmd;
    while (cin >> cmd, cmd)
    {

        if (cmd == 1 && plc > 0)
            plc--;

        else if (cmd == 2 && plc < n - 1)
            plc++;

        else if (cmd == 3 && !flag && a[plc] > 0)
        {
            flag = true;
            a[plc]--;
        }
        else if (cmd == 4 && flag && a[plc] < h)
        {
            flag = false;
            a[plc]++;
        }
    }

    for (auto i : a)
    {
        cout << i << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(NULL), cin.tie(NULL), cout.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
