#include <bits/stdc++.h>
using namespace std;
bool isPerfectSquare(int n)
{
    for (int i = 1; i * i <= n; i++)
    {

        if ((n % i == 0) && (n / i == i))
        {
            return true;
        }
    }
    return false;
}
void solve()
{
    long long n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a = 0;
    long long power = 1;
    for (int j = 0; j < n; j++)
    {
        for (int k = j; k < n; k++)
        {
            power *= arr[k];
            if (isPerfectSquare(power))
            {
                a = max(a, k);
            }
        }
    }
    cout << a << endl;
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