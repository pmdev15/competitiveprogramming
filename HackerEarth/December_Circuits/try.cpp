#include <bits/stdc++.h>
using namespace std;
void getIndex(int arr[], int K)
{
    auto it = find(arr,arr+K, K);

    if (it != arr[K])
    {

        int index = it - v.begin();
        cout << index << endl;
    }
}
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int ideal[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> ideal[n];
    }
    int time = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != ideal[j])
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
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