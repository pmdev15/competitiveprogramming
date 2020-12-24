#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    int arr[n];
    int arr2[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n + 1; j++)
    {
        cin >> arr2[j];
    }
    sort(arr, arr + n);
    sort(arr2, arr2 + (n + 1));

    for (int k = 0; k <= n; k++)
    {
        if (arr[k] != arr2[k])
        {
            cout << arr2[k] << endl;
            break;
        }
    }
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