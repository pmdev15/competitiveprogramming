#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    cin >> n;
    if (n == 0)
    {
        cout << 0 << endl;
    }
    else if (n == 1)
    {
        cout << 0 << endl;
        cout << 0 << 1 << endl;
    }
    else
    {

        for (int i = 1; i <= n; ++i)
        {
            t1 = 0, t2 = 1, nextTerm = 0;
            for (int j = 1; j <= i; j++)
            {

                if (j == 1)
                {
                    cout << t1;
                    continue;
                }
                if (j == 2)
                {
                    cout << t2;
                    continue;
                }
                nextTerm = t1 + t2;
                t1 = t2;
                t2 = nextTerm;

                cout << nextTerm;
            }
            cout << endl;
        }
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