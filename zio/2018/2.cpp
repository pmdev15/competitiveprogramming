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
    for (int i = 0; i < 12; i++)
    {
        int a;cin>>a;
        v.push_back(a);
    }

    for (int j = 0; j < 12; j++)
    {
        cout<<v[j]-10<<" ";
    }
    
}
int main()
{
    int t=1;
    // cin >> t;
    while(t--)
    {
        solve();
    }
}