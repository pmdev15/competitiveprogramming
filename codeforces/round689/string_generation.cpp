#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    char a[n];
    int add = 0;
    int cnt = 0;
    if (n > 1 && k > 1)
    {
        for (int i = 0; i < n; i++)
        {

            char b = 97 + add;
            if ((cnt+k) < n)
            {
                cout << string(k, b);
                cnt += k;
            }
            else
            {
                if (cnt < n)
                {
                    cout<<string((n-cnt),b);
                    cnt++;
                }
            }

            add++;
            if (add >= 26)
            {
                add = 0;
            }
        }
    }
    else
    {
        
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