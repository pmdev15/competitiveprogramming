#include <bits/stdc++.h>
using namespace std;

#define forp(i, a, b) for (int i = a; i < b; i++)
#define form(i, a, b) for (int i = a; i >= b; i--)
#define REP(i, n) forp(i, 0, n)
#define endl "\n"
#define ll long long
#define vi vector<int>
#define print(x) printf("%d", x)
#define write(x) cout << x
#define read(x) scanf("%d", &x)
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define mod 1000000007

set<int> s;

void solve()
{
    int n,flr;read(n);
    for (int i = 1; i < n+1; i++)
    {
        flr = floor(n/i);
        s.insert(flr);
    }
    set<int>::iterator it = s.begin();

    for (; it!= s.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    int ans=0;
    for (int j = 0; j < s.size(); j++)
    {
        ans++;
    }
    cout<<ans<<endl;
}
int main()
{
    solve();
    return 0;
}
