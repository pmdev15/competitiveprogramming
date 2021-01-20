#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
void prime(int a, int b)
{
    int i, j, flag;
    for (i = a; i <= b; i++)
    {
        if (i == 1 || i == 0)
            continue;

        flag = 1;

        for (j = 2; j <= sqrt(i); ++j)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << i << " ";
    }
    cout << endl;
}
void solve()
{
    int a, b;
    cin >> a >> b;
    prime(a, b);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1, abc = 1;
    cin >> t;
    while (t--)
    {
        // cout << "Case #" << abc << ": ";
        solve();
        ++abc;
    }
    return 0;
}