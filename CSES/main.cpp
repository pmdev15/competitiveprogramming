#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define inpout false
void fast();

void solve()
{
    int a, b;
    cin >> a >> b;
    if ((a + b) % 3 == 0 && (a != 0 || b != 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    fast();
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
    // cout << " \nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
    return 0;
}
void fast()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (inpout)
    {
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif
    }
}