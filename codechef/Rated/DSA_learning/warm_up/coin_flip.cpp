#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (b % 2 == 0 || a == c)
            cout << b / 2 << endl;
        else
            cout << b / 2 + 1 << endl;
    }
}
int main()
{
    int t = 1;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
    return 0;
}