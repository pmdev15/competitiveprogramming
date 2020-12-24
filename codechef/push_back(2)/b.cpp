#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b;}
void solve()
{
    int x,y;
    cin>>x>>y;
    int lcmxy=lcm(x,y);
    int ans=0;
    while (x!=lcmxy)
    {
        if ()
        {
            
        }
        
    }
    
}
int main()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
return 0;
}