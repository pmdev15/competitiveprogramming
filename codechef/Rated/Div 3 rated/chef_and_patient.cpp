#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define file false
void fast();
void solve()
{
    ll n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        int maxElementIndex = max_element(arr.begin(), arr.end()) - arr.begin();
        arr[maxElementIndex] = -1;
        ans[maxElementIndex] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main()
{
    fast();
    clock_t begin = clock();
    int t = 1, abc = 1;
    cin >> t;
    while (t--)
    {
        solve();
        ++abc;
    }
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << " \nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
    return 0;
}
void fast()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (file)
    {
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif
    }
}