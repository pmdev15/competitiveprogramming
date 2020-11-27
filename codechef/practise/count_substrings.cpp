#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
    cin >> n;
    string s;
    cin >> s;
    long long int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            count++;
    }
    cout << (count * (count + 1)) / 2 << endl;
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