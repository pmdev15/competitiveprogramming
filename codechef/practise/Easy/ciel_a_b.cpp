#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    int res = a - b;
	res += (res%10 == 9) ? -1 : 1;
	cout << res; 
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