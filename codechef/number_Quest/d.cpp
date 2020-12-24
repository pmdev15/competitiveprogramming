#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    if (n % 2 != 0 && n > 1)
    {
        cout << "Me" << endl;
    }
    else if (n % 2 == 0 && (n > 10 || n <= 2))
    {
        cout << "Me" << endl;
    }
    else
    {
        cout << "Grinch" << endl;
    }
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