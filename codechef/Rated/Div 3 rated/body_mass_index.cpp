#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define file false

void solve()
{
    int n, m;
    cin >> n >> m;
    int ans = n / (m * m);
    if (ans <= 18)
        cout << 1 << endl;
    else if (ans >= 19 and ans <= 24)
        cout << 2 << endl;
    else if (ans >= 25 and ans <= 29)
        cout << 3 << endl;
    else
        cout << 4 << endl;
}
int main()
{
    // fast();
    clock_t begin = clock();
    int t = 1, abc = 1;
    cin >> t;
    while (t--)
    {
        solve();
        ++abc;
    }
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << " \nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
    return 0;
}
void fast()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (file)
    {
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif
    }
}