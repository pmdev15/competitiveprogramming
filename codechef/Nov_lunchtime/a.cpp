#include <bits/stdc++.h>
using namespace std;
void inputarr(int arr[], int n)
{
    for (int abcd = 0; abcd < n; abcd++)
    {
        scanf("%d", &arr[abcd]);
    }
}
void solve()
{
    int n;
    cin >> n;
    int ans = 0, y = 0,x;
    while (n--)
    {
        cin >> x;
        if (y >= 0)
        {
            y += (x - 1);
            ans += x;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}