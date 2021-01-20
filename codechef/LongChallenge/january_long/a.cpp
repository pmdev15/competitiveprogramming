#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long k, d;
    cin >> k >> d;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        long long int a;
        cin >> a;
        sum += a;
    }
    long int total = sum / k;
    if (total < d)
    {
        cout << total << endl;
    }
    else
        cout << d << endl;
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