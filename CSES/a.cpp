#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define file false

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (n == 2 or n == 3)
    {
        cout << "NO SOLUTION" << endl;
        return;
    }

    if (n % 2 == 0)
    {
        for (int i = 2; i <= n; i += 2)
            cout << i << " ";
        for (int i = 1; i <= n; i += 2)
            cout << i << " ";
    }
    else
    {
        for (int i = n - 1; i > 0; i -= 2)
            cout << i << " ";
        for (int i = n; i > 0; i -= 2)
            cout << i << " ";
    }
}
int main()
{
    // fast();
    clock_t begin = clock();
    int t = 1, abc = 1;
    // cin >> t;
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
    if (file)
    {
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif
    }
}