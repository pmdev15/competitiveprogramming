#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }
    int less = arr[0];
    int sum = 0;
    for (int j = 1; j < n; j++)
    {
        if (less > arr[j])
        {
            sum += arr[j];
        }
        less = arr[j];
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