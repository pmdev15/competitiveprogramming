#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin, arr[i]);
    }
    int maxx = 0;
    for (int i = 0; i < n; i++)
    {
        set<char> set;
        string a;
        for (int j = 0; j < a.size(); j++)
        {
            set.insert(a[j]);
        }
        int x = set.size();
        maxx = max(maxx, x);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1, abc = 1;
    cin >> t;
    while (t--)
    {
        cout << "Case #" << abc << ": ";
        solve();
        ++abc;
    }
    return 0;
}