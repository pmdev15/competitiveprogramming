#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long int n, m;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        s.insert(m);
    }
    set<int>::iterator it = s.begin();

    for (; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
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