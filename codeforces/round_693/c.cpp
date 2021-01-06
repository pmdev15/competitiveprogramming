#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long max1 = 0;
    for (long long int j = 0; j < n; j++)
    {
        long long int i = j;
        while (i < n)
        {
            i += arr[i];
            cout << i << endl;
            max1 = max(i, max1);
            arr[i] = i;
            cout << arr[i] << endl;
        }
    }

    cout << max1 << endl;
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