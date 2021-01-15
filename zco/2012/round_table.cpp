#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int j = 0;
    ll sum = 0;
    while (j < n)
    {
        if (j + 2 < n)
        {
            sum += min(arr[j], arr[j + 2]);
            j += 2;
        }
        else
        {
            sum += arr[j];
            j++;
        }
    }
    cout << sum << endl;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}