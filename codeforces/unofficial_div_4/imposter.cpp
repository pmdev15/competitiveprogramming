#include <bits/stdc++.h>
using namespace std;
set<int> s;
void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    set<int>::iterator it = s.begin();
    bool flag = false;
    for (auto it : s)
    {
        // int i=0;
        // ++i;
        // for (int i = 0; i < n; i++)
        // {
        //     if (i != it)
        //     {
        //         flag = true;
        //     }
        // }

        // if (i != it)
        // {
        //     flag = true;
        // }
        cout << it << " ";
        // ++i;
    }
    cout << endl;
    // for (; it != s.end(); it++)
    // {
    //     int i = 1;
    //     if (i != *it)
    //     {
    //         flag = true;
    //     }
    //     cout << *it << " ";
    //     i++;
    // }
    if (flag == false)
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
}