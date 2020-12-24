#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string origin;
    cin >> origin;
    string str;
    long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "CONTEST_WON")
        {
            int a;
            cin >> a;
            sum += 300;
            if (a <= 20)
            {
                sum += (20 - a);
            }
        }
        else if (str == "TOP_CONTRIBUTOR")
        {
            sum += 300;
        }
        else if (str == "BUG_FOUND")
        {
            int a;
            cin >> a;
            sum += a;
        }
        else if (str == "CONTEST_HOSTED")
        {
            sum += 50;
        }
    }
    if (origin == "INDIAN")
    {
        cout << sum / 200 << endl;
    }
    else
    {
        cout << sum / 400 << endl;
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