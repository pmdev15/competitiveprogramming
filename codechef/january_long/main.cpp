#include <bits/stdc++.h>
using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;
//     long long sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i * i;
//     }
//     for (int j = n - 1; j >= 1; j--)
//     {
//         sum += j * j;
//     }
//     cout<<sum<<endl;
// }
// void solve()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr, arr + n);
//     for (int j = 0; j < n; j++)
//     {
//         if (arr[j] == 1)
//         {
//             cout << j << endl;
//             break;
//         }
//         else
//         {
//             continue;
//         }
//     }
// }
void solve()
{
    int n, m;
    cin >> n >> m;
    int arr1[n];
    int arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

    vector<int> v(n + m);
    vector<int>::iterator it, st;

    it = set_intersection(arr1, arr1 + n, arr2, arr2 + m, v.begin());
    for (st = v.begin(); st != it; ++st)
        cout << *st << " ";
    cout << '\n';
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
