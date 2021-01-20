#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxx = 0, sum = 0;
    for (int j = 0; j < n; j++)
    {
        for (int k = j; k < n; k++)
        {
            sum += arr[k];
            maxx = max(maxx, sum);
        }
        sum = 0;
    }
    cout << maxx << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1, abc = 1;
    cin >> t;
    while (t--)
    {
        // cout << "Case #" << abc << ": ";
        solve();
        ++abc;
    }
    return 0;
}