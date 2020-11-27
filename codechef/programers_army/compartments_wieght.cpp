#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int nocomp;
    cin >> nocomp;
    int arr[nocomp];
    for (int i = 0; i < nocomp; i++)
    {
        cin >> arr[i];
    }
    int notask;
    cin >> notask;
    for (int j = 0; j < notask; j++)
    {
        int start, end, n;
        cin >> start >> end >> n;
        for (int k = (start - 1); k < end; k++)
        {
            arr[k] += n;
        }
    }
    int sum = 0;
    for (int a = 0; a < nocomp; a++)
    {
        sum += arr[a];
    }
    cout << sum << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}