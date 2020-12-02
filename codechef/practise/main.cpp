#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n] = {0};
    int m, x, y;
    cin >> m;
    for (int j = 0; j < m; j++)
    {
        cin >> x >> y;
        for (int k = x; k <= y; k++)
        {
            arr[k]++;
        }
    }
    for (int a = 0; a < n; a++)
    {
        cout << arr[a] << " ";
    }
    cout<<endl;
}
void compute()
{
    int n;
    cin >> n;
    vector<int> vec(n, 0);
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        vec[l]++;
        if (r + 1 < n)
        {
            vec[r + 1]--;
        }
    }
    for (int z = 1; z <= n; z++)
    {
        vec[z] += vec[z - 1];
        cout << vec[z-1] << " ";
    }
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        compute();
    }
}