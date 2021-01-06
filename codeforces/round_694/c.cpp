#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;
    int num;
    if (n % 2 == 0 ? num = n / 2 : num = (n + 1) / 2)
        ;
    ll arr1[n];
    ll arr[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }
    ll sum = 0;
    int i = 0;
    for (i = 0; i < num; i++)
    {
        sum += arr[i];
    }
    for (i = num - 1; i > 0; i--)
    {
        sum += arr[i];
    }
    cout << sum << endl;
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