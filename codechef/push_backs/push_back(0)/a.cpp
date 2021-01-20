#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> k >> n;
    int first=0, second=0, index = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == k && index < 1)
        {
            first = i + 1;
            index++;
        }
        else if (a == k && index > 0)
        {
            second = i + 1;
            index++;
        }
    }
    if ((first == second) || second==0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << first << " " << second << endl;
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