#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int reverseno(int n)
{
    int reversedNumber = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }
    return reversedNumber;
}
void solve()
{
    int n, m, nrev, mrev;
    cin >> n >> m;
    int ans = reverseno(n) + reverseno(m);
    cout<<reverseno(ans)<<endl;
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