#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int max1 = 0;
    int no1 = 0;
    while (no1 <= n / 2)
    {
        max1 += k;
        no1 += 2;
    }
    int max2 = 0;
    int no2 = 0;
    while (no2 <= n / 2)
    {
        max2 += k;
        no2 += 2;
    }
    if (max1 > max2)
    {
        cout << max1<<endl;
    }
    else
    {
        cout << max2<<endl;
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
    return 0;
}