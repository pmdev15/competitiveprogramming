#include <bits/stdc++.h>
using namespace std;

#define forp(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define print(x) printf("%d", x)
#define read(x) scanf("%d", &x)
#define mod 1000000007

void solve()
{
    int n;
    read(n);
    int inp, high, ans = 0;
    cin >> high;
    int low = high;
    for (int i = 1; i < n; i++)
    {
        cin >> inp;
        if (inp > high)
        {
            high = inp;
            ans++;
        }
        else if (inp < low)
        {
            low = inp;
            ans++;
        }
    }
    print(ans);
}
int main()
{
    solve();
    return 0;
}