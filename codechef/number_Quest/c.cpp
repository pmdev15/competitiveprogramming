#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int x = n,y=0;
    for (int i = 0; i < n + (n - 1); i++)
    {
        int j;
        for (j = n; j > 0; j--)
        {
            if (j > x ? cout << j : cout << x)
                ;
        }
        if (i < n - 1 ? x-- : x++)
            ;

        for (j = n+1 ; j < n + n; j++)
        {
            if (j > y ? cout << j - (i + 1) : cout << y)
                ;
        }
        if (i < n - 1 ? y++ : y--)
            ;
        cout << endl;
    }
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