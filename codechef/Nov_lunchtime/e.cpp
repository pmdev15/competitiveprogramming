#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (((i / (i + 1)) * ((j + 1) / j)) == (n / (n + 1)))
                {
                    cout << i << j << endl;
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}
