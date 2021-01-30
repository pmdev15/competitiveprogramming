#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define Max1(a, b) max(a, b)
#define Max2(a, b, c) Max(a, Max(b, c))
#define Max3(a, b, c, d) Max(a, Max2(a, b, c))
#define GET4(a, b, c, d, e, ...) e
#define Max_C(...) GET4(__VA_ARGS__, Max3, Max2, Max1)
#define Max(...) \
    Max_C(__VA_ARGS__)(__VA_ARGS__)

void solve()
{
    int a = 2, b = 3, c = 4, d = 5;
    cout << Max(a, b, c) << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1, abc = 1;
    cin >> t;
    while (t--)
    {
        // cout << "Case #" << abc << ": ";
        solve();
        ++abc;
    }
    return 0;
}