#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = 1; i <= a; i+=2)
    {
        for (int j = 1; j <= b; j+=2)
        {
            if ((i + j) % 2 == 0)
            {
                ans++;
            }
        }
    } 

    cout << ans << endl;
}
void compute(){
	int a,b;
	cin>>a>>b;
	cout<<a<<b;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
