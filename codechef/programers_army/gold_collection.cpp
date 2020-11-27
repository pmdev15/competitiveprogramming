#include <bits/stdc++.h>
using namespace std;

#define forp(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define print(x) printf("%d", x)
#define read(x) scanf("%d", &x)
#define mod 1000000007

void solve()
{
    int noisland, notrip;
    cin >> noisland;
    int arr[noisland];
    for (int i = 0; i < noisland; i++)
    {
        cin >> arr[i];
    }
    cin >> notrip;
    for (int j = 0; j < notrip; j++)
    {
        int n, m,sum=0;
        cin >> n >> m;
        for (int k = n-1; k < m; k++)
        {
            sum += arr[k];
        }
        cout << sum << endl;
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