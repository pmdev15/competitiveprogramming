#include <bits/stdc++.h>
using namespace std;

// void solve()
// {
    // int n;
    // cin >> n;
    // int arr[n];
    // int sum = 0;
    // int one = 0, two = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    //     sum += arr[i];
    //     if (arr[i] == 1)
    //     {
    //         one++;
    //     }
    //     else
    //     {
    //         two++;
    //     }
    // }
    // if (n<2)
    // {
    //     cout<<"NO\n";
    // }
    // else if (sum % 2 == 0 && n % 2 == 0)
    // {
    //     cout << "YES\n";
    // }
    // else if (sum % 2 == 0 && ((one / 2) % 2 == 0 && ((two / 2) % 2) == 0))
    //     {
    //         cout << "YES\n";
    //     }
    // else
    // {
    //     cout << "NO\n";
    // }
// }
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (count(a, a + n, 1))
        cout << (count(a, a + n, 1) % 2 ? "NO\n" : "YES\n");
    else
        cout << (n % 2 ? "NO\n" : "YES\n");
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