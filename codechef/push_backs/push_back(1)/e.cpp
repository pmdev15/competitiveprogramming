#include <bits/stdc++.h>
using namespace std;

int lastno = 0;
void solve()
{
    long long int n;
    cin >> n;
    cout<<(n*n)+lastno<<endl;
    lastno++;
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