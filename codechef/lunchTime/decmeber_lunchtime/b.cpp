#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    string p;
    cin >> s >> p;
    int ones = 0, zeros = 0;
    int onep = 0, zerop = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ones++;
        }
        if (s[i] == '0')
        {
            zeros++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (p[i] == '1')
        {
            onep++;
        }
        if (p[i] == '0')
        {
            zerop++;
        }
    }
    if (ones == onep && zeros == zerop)
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