#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if (a > b)
    {
        if (x < y)
        {
            cout << (a - b) * x << endl;
        }
        else
        {
            cout << (a - b) * (x - 1) + y << endl;
        }
    }
    else
    {
        if (x > y)
        {
            cout << (b - a) + x << endl;
        }
        else
        {
            cout << (b - a) + y << endl;
        }
    }
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}