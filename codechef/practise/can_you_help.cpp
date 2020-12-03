#include <bits/stdc++.h>
using namespace std;

#define forp(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define print(x) printf("%d", x)
#define read(x) scanf("%d", &x)
#define mod 1000000007

void solve()
{
    int n, incom;
    cin >> n >> incom;
    int odd, even, swapodd, swapeven, profit;
    odd = ((n / 2) + 1);
    even = (n / 2);
    swapodd = ((odd * (odd - 1)) / 2);
    swapeven = (even * (even - 1)) / 2;
    profit = (swapodd * 2) + (swapeven * 2);

    if (n == 1 || n == 0 || n < 0 || incom == 0 || incom < 0)
    {
        cout << 0 << " "
             << "Null" << endl;
    }
    else if (profit < incom)
    {
        cout << abs(profit - incom) << " "
             << "Loss" << endl;
    }

    else
    {
        cout << abs(profit - incom) << " "
             << "Profit" << endl;
    }
}
int main()
{
    int t;
    read(t);
    while (t--)
    {
        solve();
    }

    return 0;
}