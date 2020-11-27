#include <bits/stdc++.h>
using namespace std;

#define forp(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define print(x) printf("%d", x)
#define read(x) scanf("%d", &x)
#define mod 1000000007

void solve()
{
    int n, m;
    cin >> n >> m;
    cout << __gcd(n, m) << endl;
}
int main()
{
    solve();
    return 0;
}