#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    // int arr[n];
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    // long long ans = 0;
    // for (int j = 0; j < arr.size(); j++)
    // {
    //     for (int l = j + 1; l < arr.size(); l++)
    //     {
    //         if ((arr[j] + arr[l]) < k)
    //         {
    //             ans++;
    //         }
    //     }
    // }
    sort(arr.begin(), arr.end());
    int l = 0;
    int j = n - 1;
    long long sum = 0;
    while (l < j)
    {
        if ((arr[l] + arr[j]) < k)
        {
            sum += j - l;
            l++;
        }
        else
        {
            j--;
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