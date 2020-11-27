#include <bits/stdc++.h>
using namespace std;

void solve()
{

    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A' || s[i] == 'D'|| s[i] == 'O' || s[i] == 'P' || s[i]=='Q'|| s[i] == 'R')
        {
            ans++;
        }
        else if (s[i] == 'B')
        {
            ans += 2;
        }
    }
    cout << ans << endl;
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