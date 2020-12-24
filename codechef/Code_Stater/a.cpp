#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        if (n % 10 != 0)
        {
            n--;
        }
        else
        {
            n /= 10;
        }
    }
    cout<<n<<endl;
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