#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

#define forp(i, a, b) for (int i = a; i < b; i++)
#define form(i, a, b) for (int i = a; i >= b; i--)
#define REP(i, n) forp(i, 0, n)
#define ll long long
#define vi vector<int>
#define si set<int>
#define print(x) printf("%d", x)
#define write(x) cout << x
#define read(x) scanf("%d", &x)
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define mod 1000000007
vi vec;
void solve()
{
    int n;
    cin >> n;
    int sum = 0, row = 0;
    forp(i,0,n){
        int a;cin>>a;
        vec.pb(a);
    }
    for (int i = 0; i < n; i++)
    {
        
    }
    
    cout << sum << endl;
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