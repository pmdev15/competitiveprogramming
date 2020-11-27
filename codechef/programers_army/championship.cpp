#include <bits/stdc++.h>
using namespace std;

#define forp(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define print(x) printf("%d", x)
#define read(x) scanf("%d", &x)
#define mod 1000000007

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int grt = 0;
    for (int j = 0; j < n; j++)
    {
        int sum = 0;
        for (int l = j; l < (k+j); l++)
        {
            if (l>n)
            {
                break;
            }
            
            sum += arr[l];
        }
        if (sum > grt)
        {
            grt = sum;
        }
    }

    cout << grt << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}