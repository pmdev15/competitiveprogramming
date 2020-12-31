#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    // for (int j = 0; j < n; j++)
    // {
    //     for (int k = j + 1; k < n; k++)
    //     {
    //         sum += abs(arr[j] - arr[k]);
    //     }
    // }
    sort(arr, arr + n);
    for (int i = n - 1; i >= 0; i--)
    {
        sum = sum + (i * arr[i]) - (n - 1 - i) * arr[i];
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