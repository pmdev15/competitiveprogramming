#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    int arr[n];
    int s;
    int min=0, max=0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (x + s > y)
        {
            max++;
            min++;
        }
        else
        {
            min--;
        }
    }
    cout << min << " " << max << endl;
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