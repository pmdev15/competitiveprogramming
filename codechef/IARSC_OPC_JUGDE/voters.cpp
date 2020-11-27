#include <bits/stdc++.h>
using namespace std;
void arrinp(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void solve()
{
    int n, m, o;
    int arr1[n], arr2[m], arr3[o];
    arrinp(arr1, n);
    arrinp(arr2, m);
    arrinp(arr3, o);
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    sort(arr3, arr2 + o);

    vector<int> v(n + m + o);
    vector<int>::iterator it, st;

    // for (int j = 0; j < max(n, max(m, o)); j++)
    // {
    set_intersection(arr1, arr1 + n, arr2, arr2 + m);
    // }
    for (st = v.begin(); st != it; ++st)
        cout << *st << ", ";
    cout << '\n';
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}