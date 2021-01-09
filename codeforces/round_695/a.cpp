#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    int a = 9;
    for (int i = 0; i < n; i++)
    {
        cout << a;
        a--;
        if (a < 0)
        {
            a = 9;
        }
    }
    cout << endl;
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