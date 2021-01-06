#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    string a, b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    if (lexicographical_compare(a.begin(),a.end(),b.begin(),b.end()))
    {
        cout << -1 << endl;
    }
    else
    {
        cout << 1 << endl;
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
    return 0;
}