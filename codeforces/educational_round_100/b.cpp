#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    long long int ans[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n - 1; j++)
    {
        for (int k = 0; k < n; k++)
        {

            if (arr[j] % arr[j + 1] == 0 || arr[j + 1] % arr[j] == 0)
            {
                ans[j] = arr[j];
                ans[j + 1] = arr[j + 1];
            }
            else
            {
                while (arr[j] % arr[j + 1] != 0)
                {
                    if (arr[j] > arr[j + 1])
                        arr[j]--;
                    else
                        arr[j]++;
                }
                ans[j] = arr[j];
                ans[j + 1] = arr[j + 1];
            }
        }
    }
    for (int a = 0; a < n; a++)
    {
        cout << ans[a] << " ";
    }
    cout << endl;
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