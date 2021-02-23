#include <bits/stdc++.h>
using namespace std;

#define ios                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long
#define endl "\n"

void solve()
{
    // string p, ptime, ans, input, inptime;
    // cin >> p >> ptime;
    // char a = p[0], b = p[1], c = p[3], d = p[4];
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> input >> inptime;
    // }
    string p, ptime;
    cin >> p >> ptime;
    ll n;
    cin >> n;
    if (ptime == "PM")
    {
        if (p[0] == '1' && p[1] == '2')
        {
        }
        else
        {
            int temp = int(p[0] - 48);
            temp *= 10;
            temp += int(p[1] - 48);
            temp += 12;
            int rem = temp % 10;
            p[1] = char(rem + 48);
            p[0] = char(int(temp / 10) + 48);
        }
    }
    else
    {
        if (p[0] == '1' && p[1] == '2')
        {
            int temp = int(p[0] - 48);
            temp *= 10;
            temp += int(p[1] - 48);
            temp -= 12;
            int rem = temp % 10;
            p[1] = char(rem + 48);
            p[0] = char(int(temp / 10) + 48);
        }
    }
    string a, b, c, d;
    for (ll i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d;
        if (b == "PM")
        {
            if (a[0] == '1' && a[1] == '2')
            {
            }
            else
            {
                int temp = int(a[0] - 48);
                temp *= 10;
                temp += int(a[1] - 48);
                temp += 12;
                int rem = temp % 10;
                a[1] = char(rem + 48);
                a[0] = char(int(temp / 10) + 48);
            }
        }
        else
        {
            if (a[0] == '1' && a[1] == '2')
            {
                int temp = int(a[0] - 48);
                temp *= 10;
                temp += int(a[1] - 48);
                temp -= 12;
                int rem = temp % 10;
                a[1] = char(rem + 48);
                a[0] = char(int(temp / 10) + 48);
            }
        }
        if (d == "PM")
        {
            if (c[0] == '1' && c[1] == '2')
            {
            }
            else
            {
                int temp = int(c[0] - 48);
                temp *= 10;
                temp += int(c[1] - 48);
                temp += 12;
                int rem = temp % 10;
                c[1] = char(rem + 48);
                c[0] = char(int(temp / 10) + 48);
            }
        }
        else
        {
            if (c[0] == '1' && c[1] == '2')
            {
                int temp = int(c[0] - 48);
                temp *= 10;
                temp += int(c[1] - 48);
                temp -= 12;
                int rem = temp % 10;
                c[1] = char(rem + 48);
                c[0] = char(int(temp / 10) + 48);
            }
        }
        if (p >= a && p <= c)
            cout << 1;
        else
            cout << 0;
    }
    cout << endl;
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