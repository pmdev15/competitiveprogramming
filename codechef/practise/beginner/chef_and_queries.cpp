#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sum += arr[0];

    // for (int i = 1; i <= n; i++)
    // {
    //     cin >> a;
    //     sum += a;
    //     if (sum < k)
    //     {
    //         cout << i << endl;
    //         break;
    //     }
    //     if (i==n)
    //     {
    //         cout<<a+1<<endl;
    //         break;
    //     }

    //     sum -= k;
    // }
    int j = 0;
    sum += arr[j];
    while (sum > k)
    {
        j++;
        // if (sum < k)
        // {
        //     cout << j << endl;
        //     break;
        // }
        sum -= k;
        sum += arr[j];
    }
    cout << j << endl;
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