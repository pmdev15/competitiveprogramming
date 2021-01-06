#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    // vector<int> arr{7, 8, 19, 7, 8, 7, 10, 20};
    int arr[n];
    long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum < 2 * k)
    {
        cout << -1 << endl;
    }
    else
    {
        sort(arr, arr + n);
        int ans = 0;
        int height1 = 0;
        int height2 = 0;
        int j = n - 1;
        long sumans = 0;
        while (k > height1 && j > -1)
        {
            height1 += arr[j];
            ans++;
            j--;
        }
        int l = j;
        while (k > height2 && l > -1)
        {
            height2 += arr[l];
            ans++;
            l--;
        }
        sumans = height1 + height2;
        if (sumans / 2 > k)
        {
            cout << ans << endl;
        }
        while (sumans / 2 < k)
        {

            sumans += arr[l];
            ans++;
            l--;
        }
        if (sumans / 2 > k)
        {
            cout << ans << endl;
        }
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