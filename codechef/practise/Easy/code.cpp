#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << " " << #y << "=" << y << endl

int F(int n, int k, int ans, string op, int a[])
{
    if (k > 0)
    {
        if (op == "AND")
        {
            for (int j = 0; j < n; j++)
            {
                ans = (ans & a[j]);
            }
        }
        else if (op == "OR")
        {
            for (int j = 0; j < n; j++)
            {
                ans = (ans | a[j]);
            }
        }
        else
        {
            if (k % 2 != 0)
            {
                for (int j = 0; j < n; j++)
                {
                    ans = (ans ^ a[j]);
                }
            }
        }
    }
    return ans;
}
void solve()
{
    int n, k, answer;
    cin >> n >> k >> answer;
    int arr[n];
    for (int a = 0; a < n; a++)
    {
        cin >> arr[a];
    }
    string oper;
    cin >> oper;
    cout << F(n, k, answer, oper, arr) << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}