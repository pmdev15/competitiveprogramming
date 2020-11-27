#include <bits/stdc++.h>
using namespace std;

#define forp(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define print(x) printf("%d", x)
#define read(x) scanf("%d", &x)
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    int arr[n] = {0};
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if ((arr[j] % arr[i]) == 0)
            {
                if
                arr[j] = 1;
                cout<<arr[j];
            }
        }
    }
    for (int k = 0; k < n; k++)
    {
        cout<<arr[k];
    }
    
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