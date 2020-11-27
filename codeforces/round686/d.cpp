#include <bits/stdc++.h>
using namespace std;

#define forp(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define print(x) printf("%d", x)
#define read(x) scanf("%d", &x)
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    if (n % 2 != 0 || n <= 2)
    {
        cout << 1 << endl
             << n << endl;
    }
    else
    {
        int ans = n, ab = 0;
        while (ans % 2 == 0)
        {
            if (ans % 2 == 0)
            {
                ans /= 2;
                ab++;
            }
        }
        cout << ab << endl;
        for (int y = 1; y < ab; y++)
        {
            cout << 2 << " ";
        }
        cout << ans*2 << endl;
    }
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