#include <bits/stdc++.h>
using namespace std;

#define ios                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long
#define endl "\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    bool flag = false, time = false, bot = true;
    int no = 0;
    int minn = n/2;
    // cout << minn << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == -1)
        {
            no++;
        }
        if (arr[i] > k)
        {
            time = true;
        }
        if (arr[i] > k)
        {
            bot = false;
        }
    }
    if (no > minn)
    {
        cout << "Rejected" << endl;
    }
    else if (time)
    {
        cout << "Too Slow" << endl;
    }
    else if (bot && no < 1)
    {
        cout << "Bot" << endl;
    }
    else
    {
        cout << "Accepted" << endl;
    }
}
int main()
{
    ios int t = 1, abc = 1;
    cin >> t;
    while (t--)
    {
        // cout << "Case #" << abc << ": ";
        solve();
        ++abc;
    }
    return 0;
}