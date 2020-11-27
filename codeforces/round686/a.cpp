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
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        arr[i - 1] = i + 1;
    }
    if (n <= 2)
    {
        for (int x = 1; x <= n; x++)
        {
            if (x==1)
            {
                cout<<2<<" ";
            }
            else
            {
                cout<<1;
            }
            
            
        }
        
    }
    else
    {
        for (int j = 1; j < n - 1; j++)
        {
            cout << arr[j] << " ";
        }
        cout << 1 << " " << 2;
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}