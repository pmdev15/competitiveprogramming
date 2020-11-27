#include <bits/stdc++.h>
using namespace std;

#define forp(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define vi vector<int>
#define print(x) printf("%d", x)
#define read(x) scanf("%d", &x)
#define mod 1000000007
vi v;
void solve()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int sum = 0;
    for (int j = 0; j < n; j++)
    {
        int b = v[j];
        if (b % k == 0)
        {
            v.pop_back();
        }
    }
    for (int l = 0; l < n; l++)
    {
        cout<<v[l]<<" ";
    }
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}