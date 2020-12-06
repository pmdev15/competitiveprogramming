#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n % 2 == 0 && d != 0)
    {
        cout << (n / d) << endl;
    }
    else if (d != 0 && n % 2 != 0)
    {
        cout << ((n + 1) / d) << endl;
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