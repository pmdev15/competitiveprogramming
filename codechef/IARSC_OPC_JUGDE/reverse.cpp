#include <bits/stdc++.h>
using namespace std;
vector<string> vi;
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string inp;
        do
        {
            cin>>inp;
            vi.push_back(inp);
        } while (inp!= "\n");
    }
    for (int j = 0; j < n; j++)
    {
        cout<<vi[j];
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
