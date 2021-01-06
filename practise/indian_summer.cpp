#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    set<pair<string, string>> s;
    // vector<string> s;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        s.emplace(a, b);
    }
    cout << s.size() << endl;
}

int main()
{
    int t = 1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
}
