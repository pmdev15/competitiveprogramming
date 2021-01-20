#include <bits/stdc++.h>
using namespace std;

// void solve()
// {
//     int n, k;
//     cin >> n >> k;
//     // vector<int> arr{7, 8, 19, 7, 8, 7, 10, 20};
//     int arr[n];
//     long int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         sum += arr[i];
//     }
//     if (sum < 2 * k)
//     {
//         cout << -1 << endl;
//     }
//     else
//     {
//         sort(arr, arr + n);
//         int ans = 0;
//         int height1 = 0;
//         int height2 = 0;
//         int j = n - 1;
//         long sumans = 0;
//         while (k > height1 && j > -1)
//         {
//             height1 += arr[j];
//             ans++;
//             j--;
//         }
//         int l = j;
//         while (k > height2 && l > -1)
//         {
//             height2 += arr[l];
//             ans++;
//             l--;
//         }
//         sumans = height1 + height2;
//         if (sumans / 2 > k)
//         {
//             cout << ans << endl;
//         }
//         while (sumans / 2 < k)
//         {

//             sumans += arr[l];
//             ans++;
//             l--;
//         }
//         if (sumans / 2 > k)
//         {
//             cout << ans << endl;
//         }
//     }
// }

bool subsetsum(vector<int> nums, int k)
{
    int sum = 0;
    int n = nums.size();
    if (n <= 1)
        return false;
    for (int i = 0; i < n; i++)
        sum += nums[i];
    int sub_sum = sum / 2;
    bool dp[n + 1][sub_sum + 1];
    memset(dp, 0, (n + 1) * (sub_sum + 1) * (sizeof(bool)));
    dp[0][0] = true;
    for (int i = 1; i <= n; i++)
    {
        int curr = nums[i - 1];
        for (int j = 0; j <= sub_sum; j++)
        {
            if (curr > j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = (dp[i - 1][j - curr] || dp[i - 1][j]);
            if (j >= k && dp[i][j] == true)
                return true;
        }
    }
    return dp[n][sub_sum];
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());
    vector<int> vec;
    int i = 0, sum = 0;
    bool flag = false;
    while (i < n)
    {
        vec.push_back(arr[i]);
        sum += arr[i];
        if (sum >= 2 * k)
        {
            if (subsetsum(vec, k))
            {
                cout << i+1<< endl;
                flag=true;
                break;
            }
        }
        i++;
    }
    if (!flag)
        cout << -1 << endl;
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
