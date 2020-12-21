#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
    scanf("%lld", &n);
    long long int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int ans = 0;
    int i = 0;
    int j = 0;
    for (i = 1; i <= n; i++)
    {
        int first = 0, last = 0;
        for (j = 1; j <= n; j++)
        {
            if (arr[j] == i)
            {
                first = j;
                last = j;
                break;
            }
        }
        for (j = first; j <= n; j++)
        {
            if (arr[j] == i)
            {
                last = j;
            }
        }
        int sum = abs(last - first);
        ans += sum;
    }
    printf("%lld", &ans);
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