#include <bits/stdc++.h>
using namespace std;

#define forp(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define si set<int>
#define print(x) printf("%d", x)
#define read(x) scanf("%d", &x)
#define mod 1000000007


void solve()
{
    si s;
    int n;
    read(n);

    for (int i = 0; i < n; i++)
    {
        int inp;
        read(inp);
        s.insert(inp);
    }
    cout << s.size() << endl;
}
int main()
{
    int t;
    read(t);
    while (t--)
    {
        solve();
    }

    return 0;
}