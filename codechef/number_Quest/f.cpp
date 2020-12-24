#include <bits/stdc++.h>
using namespace std;

void solve()
{
    unsigned long long a, b;
    cin >> a >> b;
    bool flag=false;
    unsigned long long x=1,ans;
    for (unsigned long long int i = 1; i < b; i++)
    {
        if (__gcd(a, b) == __gcd(a + x, b))
        {
            ans=x;
        }
        x++;
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
    return 0;
}