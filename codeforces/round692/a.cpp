#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == ')')
        {
            count++;
        }
        if (a[i] != ')')
        {
            count = 0;
        }
    }
    if (count > (n - count))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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