#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define file false

void solve()
{
    ll n, m;
    cin >> n >> m;
    int arr[n][m]={0};
    int topi=0, topj=0, bottomi=0, bottomj=0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                if (flag)
                {
                    topi = i;
                    topj = j;
                    flag = false;
                }
                bottomi = i;
                bottomj = j;
            }
        }
    }
    string s = "YES";
    for (int i = topi; i <= bottomi; i++)
    {
        for (int j = topj; j <= bottomj; j++)
        {
            if (arr[i][j] == 0)
            {
                s = "NO";
                break;
            }
        }
    }
    cout << s << endl;
}
int main()
{
    // fast();
    clock_t begin = clock();
    int t = 1, abc = 1;
    cin >> t;
    while (t--)
    {
        solve();
        ++abc;
    }
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << " \nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
    return 0;
}
void fast()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (file)
    {
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif
    }
}