#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int a, b, c;
    cin >> a >> b >> c;
    if (a == 0 || b == 0 || c == 0)
    {
        cout << "NO" << endl;
        return;
    }

    if (((a + b + c) - 2) % 7 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
    return 0;
}